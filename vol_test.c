/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Copyright by The HDF Group.                                               *
 * All rights reserved.                                                      *
 *                                                                           *
 * This file is part of HDF5.  The full HDF5 copyright notice, including     *
 * terms governing use, modification, and redistribution, is contained in    *
 * the COPYING file, which can be found at the root of the source code       *
 * distribution tree, or in https://support.hdfgroup.org/ftp/HDF5/releases.  *
 * If you do not have access to either file, you may request a copy from     *
 * help@hdfgroup.org.                                                        *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/*
 * A test suite which only makes public HDF5 API calls and which is meant
 * to test a specified HDF5 VOL connector or set of VOL connectors. This
 * test suite must assume that a VOL connector could only implement the File
 * interface. Therefore, the suite should check that a particular piece of
 * functionality is supported by the VOL connector before actually testing
 * it. If the functionality is not supported, the test should simply be
 * skipped, perhaps with a note as to why the test was skipped, if possible.
 *
 * If the VOL connector being used supports the creation of groups, this
 * test suite will attempt to organize the output of these various tests
 * into groups based on their respective interface.
 */

#include "vol_test.h"
#include "vol_test_util.h"

#include "vol_file_test.h"
#include "vol_group_test.h"
#include "vol_dataset_test.h"
#include "vol_datatype_test.h"
#include "vol_attribute_test.h"
#include "vol_link_test.h"
#include "vol_object_test.h"
#include "vol_misc_test.h"

char vol_test_filename[VOL_TEST_FILENAME_MAX_LENGTH];

size_t n_tests_run_g;
size_t n_tests_passed_g;
size_t n_tests_failed_g;
size_t n_tests_skipped_g;

/******************************************************************************/

int main(int argc, char **argv)
{
    char *vol_connector_name;
    hbool_t err_occurred = FALSE;

#ifdef H5_HAVE_PARALLEL
    /* If HDF5 was built with parallel enabled, go ahead and call MPI_Init before
     * running these tests. Even though these are meant to be serial tests, they will
     * likely be run using mpirun (or similar) and we cannot necessarily expect HDF5 or
     * an HDF5 VOL connector to call MPI_Init.
     */
    MPI_Init(&argc, &argv);
#endif

    /* h5_reset(); */

    n_tests_run_g = 0;
    n_tests_passed_g = 0;
    n_tests_failed_g = 0;
    n_tests_skipped_g = 0;

    srand((unsigned) HDtime(NULL));

    HDsnprintf(vol_test_filename, VOL_TEST_FILENAME_MAX_LENGTH, "%s", TEST_FILE_NAME);

    if (NULL == (vol_connector_name = HDgetenv("HDF5_VOL_CONNECTOR"))) {
        HDprintf("No VOL connector selected; using native VOL connector\n");
        vol_connector_name = "native";
    }

    HDprintf("Running VOL tests with VOL connector '%s'\n\n", vol_connector_name);
    HDprintf("Test parameters:\n");
    HDprintf("  - Test file name: '%s'\n", vol_test_filename);
    HDprintf("\n\n");

    /*
     * Create the file that will be used for all of the tests,
     * except for those which test file creation.
     */
    if (create_test_container(vol_test_filename) < 0) {
        HDfprintf(stderr, "Unable to create testing container file '%s'\n", vol_test_filename);
        err_occurred = TRUE;
        goto done;
    }

    (void)vol_file_test();
    (void)vol_group_test();
    (void)vol_dataset_test();
    (void)vol_datatype_test();
    (void)vol_attribute_test();
    (void)vol_link_test();
    (void)vol_object_test();
    (void)vol_misc_test();

    HDprintf("%ld/%ld (%.2f%%) VOL tests passed with VOL connector '%s'\n",
            (long) n_tests_passed_g, (long) n_tests_run_g, ((float) n_tests_passed_g / n_tests_run_g * 100.0), vol_connector_name);
    HDprintf("%ld/%ld (%.2f%%) VOL tests failed with VOL connector '%s'\n",
            (long) n_tests_failed_g, (long) n_tests_run_g, ((float) n_tests_failed_g / n_tests_run_g * 100.0), vol_connector_name);
    HDprintf("%ld/%ld (%.2f%%) VOL tests were skipped with VOL connector '%s'\n",
            (long) n_tests_skipped_g, (long) n_tests_run_g, ((float) n_tests_skipped_g / n_tests_run_g * 100.0), vol_connector_name);

done:
    H5close();

#ifdef H5_HAVE_PARALLEL
    MPI_Finalize();
#endif

    HDexit((err_occurred ? EXIT_FAILURE : EXIT_SUCCESS));
}
