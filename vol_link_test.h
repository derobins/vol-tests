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

#ifndef VOL_LINK_TEST_H
#define VOL_LINK_TEST_H

#include "vol_test.h"

int vol_link_test(void);

/*********************************************
 *                                           *
 *      VOL connector Link test defines      *
 *                                           *
 *********************************************/

#define HARD_LINK_TEST_GROUP_NAME "hard_link_creation_test"
#define HARD_LINK_TEST_LINK_NAME  "hard_link"

#define H5L_SAME_LOC_TEST_GROUP_NAME "h5l_same_loc_test_group"
#if 0
#define H5L_SAME_LOC_TEST_LINK_NAME1 "h5l_same_loc_test_link1"
#endif
#define H5L_SAME_LOC_TEST_LINK_NAME2 "h5l_same_loc_test_link2"

#define HARD_LINK_INVALID_PARAMS_TEST_GROUP_NAME "hard_link_creation_invalid_params_test"
#define HARD_LINK_INVALID_PARAMS_TEST_LINK_NAME  "hard_link"

#define SOFT_LINK_EXISTING_RELATIVE_TEST_SUBGROUP_NAME "soft_link_to_existing_relative_path_test"
#define SOFT_LINK_EXISTING_RELATIVE_TEST_OBJECT_NAME   "group"
#define SOFT_LINK_EXISTING_RELATIVE_TEST_LINK_NAME     "soft_link_to_existing_relative_path"

#define SOFT_LINK_EXISTING_ABSOLUTE_TEST_SUBGROUP_NAME "soft_link_to_existing_absolute_path_test"
#define SOFT_LINK_EXISTING_ABSOLUTE_TEST_LINK_NAME     "soft_link_to_existing_absolute_path"

#define SOFT_LINK_DANGLING_RELATIVE_TEST_SUBGROUP_NAME "soft_link_dangling_relative_path_test"
#define SOFT_LINK_DANGLING_RELATIVE_TEST_OBJECT_NAME   "group"
#define SOFT_LINK_DANGLING_RELATIVE_TEST_LINK_NAME     "soft_link_dangling_relative_path"

#define SOFT_LINK_DANGLING_ABSOLUTE_TEST_SUBGROUP_NAME   "soft_link_dangling_absolute_path_test"
#define SOFT_LINK_DANGLING_ABSOLUTE_TEST_OBJECT_NAME     "group"
#define SOFT_LINK_DANGLING_ABSOLUTE_TEST_LINK_NAME       "soft_link_dangling_absolute_path"

#define SOFT_LINK_INVALID_PARAMS_TEST_GROUP_NAME "soft_link_creation_invalid_params_test"
#define SOFT_LINK_INVALID_PARAMS_TEST_LINK_NAME  "soft_link_to_root"

#define EXTERNAL_LINK_TEST_SUBGROUP_NAME "external_link_test"
#define EXTERNAL_LINK_TEST_FILE_NAME     "ext_link_file.h5"
#define EXTERNAL_LINK_TEST_LINK_NAME     "ext_link"

#define EXTERNAL_LINK_TEST_DANGLING_SUBGROUP_NAME "external_link_dangling_test"
#define EXTERNAL_LINK_TEST_DANGLING_LINK_NAME     "dangling_ext_link"
#define EXTERNAL_LINK_TEST_DANGLING_OBJECT_NAME   "external_group"

#define EXTERNAL_LINK_INVALID_PARAMS_TEST_GROUP_NAME "external_link_creation_invalid_params_test"
#define EXTERNAL_LINK_INVALID_PARAMS_TEST_FILE_NAME  "ext_link_invalid_params_file.h5"
#define EXTERNAL_LINK_INVALID_PARAMS_TEST_LINK_NAME  "external_link"

#define UD_LINK_TEST_UDATA_MAX_SIZE 256
#define UD_LINK_TEST_GROUP_NAME     "ud_link_creation_test"
#define UD_LINK_TEST_LINK_NAME      "ud_link"

#define UD_LINK_INVALID_PARAMS_TEST_UDATA_MAX_SIZE 256
#define UD_LINK_INVALID_PARAMS_TEST_GROUP_NAME     "ud_link_creation_invalid_params_test"
#define UD_LINK_INVALID_PARAMS_TEST_LINK_NAME      "ud_link"

#define LINK_DELETE_TEST_EXTERNAL_LINK_NAME  "external_link"
#define LINK_DELETE_TEST_EXTERNAL_LINK_NAME2 "external_link2"
#define LINK_DELETE_TEST_HARD_LINK_NAME      "hard_link"
#define LINK_DELETE_TEST_HARD_LINK_NAME2     "hard_link2"
#define LINK_DELETE_TEST_SOFT_LINK_NAME      "soft_link"
#define LINK_DELETE_TEST_SOFT_LINK_NAME2     "soft_link2"
#define LINK_DELETE_TEST_SUBGROUP_NAME       "link_delete_test"

#define LINK_DELETE_INVALID_PARAMS_TEST_HARD_LINK_NAME "hard_link"
#define LINK_DELETE_INVALID_PARAMS_TEST_GROUP_NAME     "link_deletion_invalid_params_test"

#define COPY_LINK_TEST_EXTERNAL_LINK_COPY_NAME "external_link_copy"
#define COPY_LINK_TEST_SOFT_LINK_TARGET_PATH   "/" LINK_TEST_GROUP_NAME "/" COPY_LINK_TEST_SUBGROUP_NAME
#define COPY_LINK_TEST_HARD_LINK_COPY_NAME     "hard_link_copy"
#define COPY_LINK_TEST_SOFT_LINK_COPY_NAME     "soft_link_copy"
#define COPY_LINK_TEST_EXTERNAL_LINK_NAME      "external_link"
#define COPY_LINK_TEST_HARD_LINK_NAME          "hard_link"
#define COPY_LINK_TEST_SOFT_LINK_NAME          "soft_link"
#define COPY_LINK_TEST_SRC_GROUP_NAME          "src_group"
#define COPY_LINK_TEST_DST_GROUP_NAME          "dst_group"
#define COPY_LINK_TEST_SUBGROUP_NAME           "link_copy_test"

#define COPY_LINK_INVALID_PARAMS_TEST_HARD_LINK_COPY_NAME "hard_link_copy"
#define COPY_LINK_INVALID_PARAMS_TEST_HARD_LINK_NAME      "hard_link"
#define COPY_LINK_INVALID_PARAMS_TEST_SRC_GROUP_NAME      "src_group"
#define COPY_LINK_INVALID_PARAMS_TEST_DST_GROUP_NAME      "dst_group"
#define COPY_LINK_INVALID_PARAMS_TEST_SUBGROUP_NAME       "link_copy_invalid_params_test"

#define MOVE_LINK_TEST_SOFT_LINK_TARGET_PATH "/" LINK_TEST_GROUP_NAME "/" MOVE_LINK_TEST_SUBGROUP_NAME
#define MOVE_LINK_TEST_HARD_LINK_NAME        "hard_link"
#define MOVE_LINK_TEST_SOFT_LINK_NAME        "soft_link"
#define MOVE_LINK_TEST_SRC_GROUP_NAME        "src_group"
#define MOVE_LINK_TEST_DST_GROUP_NAME        "dst_group"
#define MOVE_LINK_TEST_SUBGROUP_NAME         "link_move_test"

#define MOVE_LINK_INVALID_PARAMS_TEST_HARD_LINK_NAME "hard_link"
#define MOVE_LINK_INVALID_PARAMS_TEST_SRC_GROUP_NAME "src_grp"
#define MOVE_LINK_INVALID_PARAMS_TEST_DST_GROUP_NAME "dst_grp"
#define MOVE_LINK_INVALID_PARAMS_TEST_SUBGROUP_NAME  "link_move_invalid_params_test"

#define GET_LINK_VAL_TEST_SUBGROUP_NAME  "get_link_val_test"
#define GET_LINK_VAL_TEST_SOFT_LINK_NAME "soft_link"
#define GET_LINK_VAL_TEST_EXT_LINK_NAME  "ext_link"

#define GET_LINK_VAL_INVALID_PARAMS_TEST_SOFT_LINK_NAME "soft_link"
#define GET_LINK_VAL_INVALID_PARAMS_TEST_GROUP_NAME     "get_link_val_invalid_params_test"

#define GET_LINK_INFO_TEST_HARD_LINK_NAME "hard_link"
#define GET_LINK_INFO_TEST_SOFT_LINK_NAME "soft_link"
#define GET_LINK_INFO_TEST_EXT_LINK_NAME  "ext_link"
#define GET_LINK_INFO_TEST_GROUP_NAME     "get_link_info_test"

#define GET_LINK_INFO_INVALID_PARAMS_TEST_HARD_LINK_NAME "hard_link"
#define GET_LINK_INFO_INVALID_PARAMS_TEST_GROUP_NAME     "get_link_info_invalid_params_test"

#define GET_LINK_NAME_TEST_EXTERNAL_SUBGROUP_NAME "get_external_link_name_test"
#define GET_LINK_NAME_TEST_HARD_SUBGROUP_NAME     "get_hard_link_name_test"
#define GET_LINK_NAME_TEST_SOFT_SUBGROUP_NAME     "get_soft_link_name_test"
#define GET_LINK_NAME_TEST_UD_SUBGROUP_NAME       "get_ud_link_name_test"
#define GET_LINK_NAME_TEST_HARD_LINK_NAME         "test_link1"
#define GET_LINK_NAME_TEST_GROUP_NAME             "get_link_name_test"

#define GET_LINK_NAME_INVALID_PARAMS_TEST_HARD_LINK_NAME "test_link1"
#define GET_LINK_NAME_INVALID_PARAMS_TEST_GROUP_NAME     "get_link_name_invalid_params_test"

#define LINK_ITER_HARD_LINKS_TEST_DSET_SPACE_RANK 2
#define LINK_ITER_HARD_LINKS_TEST_SUBGROUP_NAME   "link_iter_hard_links_test"
#define LINK_ITER_HARD_LINKS_TEST_LINK_NAME       "hard_link"
#define LINK_ITER_HARD_LINKS_TEST_NUM_LINKS       10
#define LINK_ITER_HARD_LINKS_TEST_BUF_SIZE        64

#define LINK_ITER_SOFT_LINKS_TEST_SUBGROUP_NAME "link_iter_soft_links_test"
#define LINK_ITER_SOFT_LINKS_TEST_LINK_NAME     "soft_link"
#define LINK_ITER_SOFT_LINKS_TEST_NUM_LINKS     10
#define LINK_ITER_SOFT_LINKS_TEST_BUF_SIZE      64

#define LINK_ITER_EXT_LINKS_TEST_SUBGROUP_NAME "link_iter_ext_links_test"
#define LINK_ITER_EXT_LINKS_TEST_LINK_NAME     "external_link"
#define LINK_ITER_EXT_LINKS_TEST_NUM_LINKS     10
#define LINK_ITER_EXT_LINKS_TEST_BUF_SIZE      64

#define LINK_ITER_MIXED_LINKS_TEST_DSET_SPACE_RANK 2
#define LINK_ITER_MIXED_LINKS_TEST_HARD_LINK_NAME  "hard_link1"
#define LINK_ITER_MIXED_LINKS_TEST_SOFT_LINK_NAME  "soft_link1"
#define LINK_ITER_MIXED_LINKS_TEST_EXT_LINK_NAME   "ext_link1"
#define LINK_ITER_MIXED_LINKS_TEST_SUBGROUP_NAME   "link_iter_mixed_links_test"
#define LINK_ITER_MIXED_LINKS_TEST_NUM_LINKS       3

#define LINK_ITER_INVALID_PARAMS_TEST_DSET_SPACE_RANK 2
#define LINK_ITER_INVALID_PARAMS_TEST_HARD_LINK_NAME  "hard_link1"
#define LINK_ITER_INVALID_PARAMS_TEST_SOFT_LINK_NAME  "soft_link1"
#define LINK_ITER_INVALID_PARAMS_TEST_EXT_LINK_NAME   "ext_link1"
#define LINK_ITER_INVALID_PARAMS_TEST_SUBGROUP_NAME   "link_iter_invalid_params_test"

#define LINK_ITER_0_LINKS_TEST_SUBGROUP_NAME "link_iter_0_links_test"

#define LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_NUM_LINKS_PER_TEST                                                    \
(                                                                                                                 \
    (LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_NUM_LINKS_PER_GROUP * LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_NUM_SUBGROUPS) \
  + LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_NUM_SUBGROUPS                                                             \
)
#define LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_NUM_LINKS_PER_GROUP 10
#define LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_DSET_SPACE_RANK     2
#define LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_NUM_SUBGROUPS       5
#define LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_NESTED_GRP_NAME     "subgroup"
#define LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_SUBGROUP_NAME       "link_visit_hard_links_no_cycle_test"
#define LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_LINK_NAME           "hard_link"
#define LINK_VISIT_HARD_LINKS_NO_CYCLE_TEST_BUF_SIZE            256

#define LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_NUM_LINKS_PER_TEST                                                    \
(                                                                                                                 \
    (LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_NUM_LINKS_PER_GROUP * LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_NUM_SUBGROUPS) \
  + LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_NUM_SUBGROUPS                                                             \
)
#define LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_NUM_LINKS_PER_GROUP 10
#define LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_NUM_SUBGROUPS       5
#define LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_NESTED_GRP_NAME     "subgroup"
#define LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_SUBGROUP_NAME       "link_visit_soft_links_no_cycle_test"
#define LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_LINK_NAME           "soft_link"
#define LINK_VISIT_SOFT_LINKS_NO_CYCLE_TEST_BUF_SIZE            256

#define LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_NUM_LINKS_PER_TEST                                                   \
(                                                                                                               \
    (LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_NUM_LINKS_PER_GROUP * LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_NUM_SUBGROUPS) \
  + LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_NUM_SUBGROUPS                                                            \
)
#define LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_NUM_LINKS_PER_GROUP 10
#define LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_NUM_SUBGROUPS       5
#define LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_NESTED_GRP_NAME     "subgroup"
#define LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_SUBGROUP_NAME       "link_visit_ext_links_no_cycle_test"
#define LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_LINK_NAME           "external_link"
#define LINK_VISIT_EXT_LINKS_NO_CYCLE_TEST_BUF_SIZE            256

#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_DSET_SPACE_RANK 2
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_DSET_NAME       "dset"
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_DSET_NAME2      "dset2"
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_SUBGROUP_NAME   "link_visit_mixed_links_no_cycle_test"
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_SUBGROUP_NAME2  "link_visit_subgroup1"
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_SUBGROUP_NAME3  "link_visit_subgroup2"
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_LINK_NAME1      "hard_link1"
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_LINK_NAME2      "soft_link1"
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_LINK_NAME3      "ext_link1"
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_LINK_NAME4      "hard_link2"
#define LINK_VISIT_MIXED_LINKS_NO_CYCLE_TEST_NUM_LINKS       8

#define LINK_VISIT_HARD_LINKS_CYCLE_TEST_NUM_LINKS_PER_TEST                                                 \
(                                                                                                           \
    (LINK_VISIT_HARD_LINKS_CYCLE_TEST_NUM_LINKS_PER_GROUP * LINK_VISIT_HARD_LINKS_CYCLE_TEST_NUM_SUBGROUPS) \
  + LINK_VISIT_HARD_LINKS_CYCLE_TEST_NUM_SUBGROUPS                                                          \
)
#define LINK_VISIT_HARD_LINKS_CYCLE_TEST_NUM_LINKS_PER_GROUP 10
#define LINK_VISIT_HARD_LINKS_CYCLE_TEST_NUM_SUBGROUPS       5
#define LINK_VISIT_HARD_LINKS_CYCLE_TEST_NESTED_GRP_NAME     "subgroup"
#define LINK_VISIT_HARD_LINKS_CYCLE_TEST_SUBGROUP_NAME       "link_visit_hard_links_cycle_test"
#define LINK_VISIT_HARD_LINKS_CYCLE_TEST_LINK_NAME           "hard_link"
#define LINK_VISIT_HARD_LINKS_CYCLE_TEST_BUF_SIZE            256

#define LINK_VISIT_SOFT_LINKS_CYCLE_TEST_NUM_LINKS_PER_TEST                                                 \
(                                                                                                           \
    (LINK_VISIT_SOFT_LINKS_CYCLE_TEST_NUM_LINKS_PER_GROUP * LINK_VISIT_SOFT_LINKS_CYCLE_TEST_NUM_SUBGROUPS) \
  + LINK_VISIT_SOFT_LINKS_CYCLE_TEST_NUM_SUBGROUPS                                                          \
)
#define LINK_VISIT_SOFT_LINKS_CYCLE_TEST_NUM_LINKS_PER_GROUP 10
#define LINK_VISIT_SOFT_LINKS_CYCLE_TEST_NUM_SUBGROUPS       5
#define LINK_VISIT_SOFT_LINKS_CYCLE_TEST_NESTED_GRP_NAME     "subgroup"
#define LINK_VISIT_SOFT_LINKS_CYCLE_TEST_SUBGROUP_NAME       "link_visit_soft_links_cycle_test"
#define LINK_VISIT_SOFT_LINKS_CYCLE_TEST_LINK_NAME           "soft_link"
#define LINK_VISIT_SOFT_LINKS_CYCLE_TEST_BUF_SIZE            256

#define LINK_VISIT_EXT_LINKS_CYCLE_TEST_NUM_LINKS_PER_TEST                                                \
(                                                                                                         \
    (LINK_VISIT_EXT_LINKS_CYCLE_TEST_NUM_LINKS_PER_GROUP * LINK_VISIT_EXT_LINKS_CYCLE_TEST_NUM_SUBGROUPS) \
  + LINK_VISIT_EXT_LINKS_CYCLE_TEST_NUM_SUBGROUPS                                                         \
)
#define LINK_VISIT_EXT_LINKS_CYCLE_TEST_NUM_LINKS_PER_GROUP 10
#define LINK_VISIT_EXT_LINKS_CYCLE_TEST_NUM_SUBGROUPS       5
#define LINK_VISIT_EXT_LINKS_CYCLE_TEST_NESTED_GRP_NAME     "subgroup"
#define LINK_VISIT_EXT_LINKS_CYCLE_TEST_SUBGROUP_NAME       "link_visit_ext_links_cycle_test"
#define LINK_VISIT_EXT_LINKS_CYCLE_TEST_LINK_NAME           "external_link"
#define LINK_VISIT_EXT_LINKS_CYCLE_TEST_BUF_SIZE            256

#define LINK_VISIT_MIXED_LINKS_CYCLE_TEST_SUBGROUP_NAME  "link_visit_mixed_links_cycle_test"
#define LINK_VISIT_MIXED_LINKS_CYCLE_TEST_SUBGROUP_NAME2 "link_visit_subgroup1"
#define LINK_VISIT_MIXED_LINKS_CYCLE_TEST_SUBGROUP_NAME3 "link_visit_subgroup2"
#define LINK_VISIT_MIXED_LINKS_CYCLE_TEST_LINK_NAME1     "hard_link1"
#define LINK_VISIT_MIXED_LINKS_CYCLE_TEST_LINK_NAME2     "soft_link1"
#define LINK_VISIT_MIXED_LINKS_CYCLE_TEST_LINK_NAME3     "ext_link1"
#define LINK_VISIT_MIXED_LINKS_CYCLE_TEST_LINK_NAME4     "hard_link2"
#define LINK_VISIT_MIXED_LINKS_CYCLE_TEST_NUM_LINKS      6

#define LINK_VISIT_INVALID_PARAMS_TEST_DSET_SPACE_RANK 2
#define LINK_VISIT_INVALID_PARAMS_TEST_DSET_NAME       "dset"
#define LINK_VISIT_INVALID_PARAMS_TEST_SUBGROUP_NAME   "link_visit_invalid_params_test"
#define LINK_VISIT_INVALID_PARAMS_TEST_SUBGROUP_NAME2  "link_visit_subgroup1"
#define LINK_VISIT_INVALID_PARAMS_TEST_SUBGROUP_NAME3  "link_visit_subgroup2"
#define LINK_VISIT_INVALID_PARAMS_TEST_LINK_NAME1      "hard_link1"
#define LINK_VISIT_INVALID_PARAMS_TEST_LINK_NAME2      "soft_link1"
#define LINK_VISIT_INVALID_PARAMS_TEST_LINK_NAME3      "ext_link1"
#define LINK_VISIT_INVALID_PARAMS_TEST_LINK_NAME4      "hard_link2"

#define LINK_VISIT_0_LINKS_TEST_SUBGROUP_NAME   "link_visit_0_links_test"
#define LINK_VISIT_0_LINKS_TEST_SUBGROUP_NAME2  "link_visit_0_links_test_subgroup1"
#define LINK_VISIT_0_LINKS_TEST_SUBGROUP_NAME3  "link_visit_0_links_test_subgroup2"

#endif
