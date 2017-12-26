// ==++==
// 
//   
//    Copyright (c) 2006 Microsoft Corporation.  All rights reserved.
//   
//    The use and distribution terms for this software are contained in the file
//    named license.txt, which can be found in the root of this distribution.
//    By using this software in any fashion, you are agreeing to be bound by the
//    terms of this license.
//   
//    You must not remove this notice, or any other, from this software.
//   
// 
// ==--==
#ifndef __FUSION_RESOURCE_H_
#define __FUSION_RESOURCE_H_

#define ID_FUSLOG_ASSEMBLY_CREATION_FAILURE              10000
#define ID_FUSLOG_ASSEMBLY_LOOKUP_FAILURE                10001
#define ID_FUSLOG_ISEQUAL_DIFF_NAME                      10005
#define ID_FUSLOG_ISEQUAL_DIFF_VERSION_MAJOR             10006
#define ID_FUSLOG_ISEQUAL_DIFF_VERSION_MINOR             10007
#define ID_FUSLOG_ISEQUAL_DIFF_VERSION_REVISION          10008
#define ID_FUSLOG_ISEQUAL_DIFF_VERSION_BUILD             10009
#define ID_FUSLOG_ISEQUAL_DIFF_PUBLIC_KEY_TOKEN          10010
#define ID_FUSLOG_ISEQUAL_DIFF_CULTURE                   10011
#define ID_FUSLOG_ISEQUAL_DIFF_CUSTOM                    10012
#define ID_FUSLOG_CANONICALIZATION_ERROR                 10014
#define ID_FUSLOG_POLICY_CACHE_FAILURE                   10016
#define ID_FUSLOG_APP_CFG_PIGGYBACK                      10017
#define ID_FUSLOG_PREBIND_INFO_START                     10018
#define ID_FUSLOG_PREBIND_INFO_DISPLAY_NAME              10019
#define ID_FUSLOG_PREBIND_INFO_WHERE_REF                 10020
#define ID_FUSLOG_PREBIND_INFO_APPBASE                   10021
#define ID_FUSLOG_PREBIND_INFO_PRIVATE_PATH              10023
#define ID_FUSLOG_PREBIND_INFO_DYNAMIC_BASE              10024
#define ID_FUSLOG_PREBIND_INFO_CACHE_BASE                10025
#define ID_FUSLOG_PREBIND_INFO_APP_NAME                  10026
#define ID_FUSLOG_PREBIND_INFO_END                       10027
#define ID_FUSLOG_APP_CFG_DOWNLOAD                       10028
#define ID_FUSLOG_APP_CFG_DOWNLOAD_LOCATION              10029
#define ID_FUSLOG_LOADCTX_HIT                            10030
#define ID_FUSLOG_CFG_NOT_EXIST                          10031
#define ID_FUSLOG_APP_CFG_FOUND                          10032
#define ID_FUSLOG_DEVOVERRIDE_REF_DEF_MISMATCH           10036
#define ID_FUSLOG_DEVOVERRIDE_SIGNATURE_CHECK_FAILED     10037
#define ID_FUSLOG_XML_PRIVATE_ASM_REDIRECT               10039
#define ID_FUSLOG_XML_PARSE_ERROR_CODE                   10041
#define ID_FUSLOG_XML_ASSEMBLYIDENTITY_MISSING_NAME      10042
#define ID_FUSLOG_XML_BINDINGREDIRECT_INSUFFICIENT_DATA  10043
#define ID_FUSLOG_XML_CODEBASE_HREF_MISSING              10044
#define ID_FUSLOG_XML_MULTIPLE_IDENTITIES                10045
#define ID_FUSLOG_PRIVATE_PATH_DUPLICATE                 10046
#define ID_FUSLOG_POLICY_NOT_APPLIED                     10047
#define ID_FUSLOG_HOST_CONFIG_FILE                       10048
#define ID_FUSLOG_HOST_CONFIG_FILE_MISSING               10049
#define ID_FUSLOG_HOST_CFG_REDIRECT                      10051
#define ID_FUSLOG_HOST_CFG_NO_REDIRECT                   10052
#define ID_FUSLOG_APP_CFG_REDIRECT                       10053
#define ID_FUSLOG_APP_CFG_SAFE_MODE                      10054
#define ID_FUSLOG_PUB_CFG_MISSING                        10055
#define ID_FUSLOG_PUB_CFG_FOUND                          10056
#define ID_FUSLOG_PUB_CFG_REDIRECT                       10057
#define ID_FUSLOG_MACHINE_CFG_MISSING                    10058
#define ID_FUSLOG_MACHINE_CFG_FOUND                      10059
#define ID_FUSLOG_MACHINE_CFG_REDIRECT                   10060
#define ID_FUSLOG_REDIRECT_NO_CODEBASE                   10061
#define ID_FUSLOG_POLICY_CODEBASE                        10062
#define ID_FUSLOG_POST_POLICY_REFERENCE                  10063
#define ID_FUSLOG_APPLY_POLICY_FAILED                    10064
#define ID_FUSLOG_CFG_PRIVATE_PATH                       10065
#define ID_FUSLOG_XML_PARSE_ERROR_FILE                   10066
#define ID_FUSLOG_CODEBASE_RETRIEVE_FAILURE              10067
#define ID_FUSLOG_ATTEMPT_NEW_DOWNLOAD                   10068
#define ID_FUSLOG_PROBE_FAIL_BUT_ASM_FOUND               10069
#define ID_FUSLOG_ASM_SETUP_FAILURE                      10070
#define ID_FUSLOG_PREDOWNLOAD_FAILURE                    10071
#define ID_FUSLOG_URLMON_MISSING                         10072
#define ID_FUSLOG_DOWNLOAD_PIGGYBACK                     10073
#define ID_FUSLOG_DOWNLOAD_SUCCESS                       10074
#define ID_FUSLOG_LAST_MOD_FAILURE                       10075
#define ID_FUSLOG_MSI_CODEBASE_UNSUPPORTED               10076
#define ID_FUSLOG_CAB_ASM_NOT_FOUND_EXTRACTED            10077
#define ID_FUSLOG_FAILED_PROBING                         10078
#define ID_FUSLOG_PARTIAL_GAC_UNSUPPORTED                10079
#define ID_FUSLOG_GAC_LOOKUP_SUCCESS                     10080
#define ID_FUSLOG_MSI_INSTALL_ATTEMPT                    10081
#define ID_FUSLOG_MSI_ASM_INSTALL_SUCCESS                10082
#define ID_FUSLOG_POLICY_CACHE_INSERT_FAILURE            10084
#define ID_FUSLOG_MSI_SUCCESS_FUSION_SETUP_FAIL          10085
#define ID_FUSLOG_SETUP_RUN_FROM_SOURCE                  10086
#define ID_FUSLOG_MODULE_INTEGRITY_CHECK_FAILURE         10087
#define ID_FUSLOG_SETUP_DOWNLOAD_CACHE                   10088
#define ID_FUSLOG_REF_DEF_MISMATCH                       10089
#define ID_FUSLOG_SETUP_FAILURE                          10090
#define ID_FUSLOG_IGNORE_INVALID_PROBE                   10091
#define ID_FUSLOG_CACHE_LOOKUP_SUCCESS                   10092
#define ID_FUSLOG_PREJIT_NOT_FOUND                       10093
#define ID_FUSLOG_CODEBASE_CONSTRUCTION_FAILURE          10094
#define ID_FUSLOG_CODEBASE_UNAVAILABLE                   10095
#define ID_FUSLOG_DOWNLOAD_CACHE_LOOKUP_SUCCESS          10096
#define ID_FUSLOG_SETUP_CAB                              10097
#define ID_FUSLOG_TEMP_DIR_CREATE_FAILURE                10098
#define ID_FUSLOG_CAB_EXTRACT_FAILURE                    10099
#define ID_FUSLOG_CAB_ASM_FOUND                          10100
#define ID_FUSLOG_CAB_EXTRACT_SUCCESS                    10101
#define ID_FUSLOG_DOWNLOAD_CACHE_CREATE_FAILURE          10102
#define ID_FUSLOG_CAB_ASM_NOT_FOUND                      10103
#define ID_FUSLOG_TEMP_DIR_REMOVE_FAILURE                10104
#define ID_FUSLOG_MANIFEST_EXTRACT_FAILURE               10105
#define ID_FUSLOG_NAME_DEF_EXTRACT_FAILURE               10106
#define ID_FUSLOG_INVALID_PRIVATE_ASM_LOCATION           10107
#define ID_FUSLOG_PARTIAL_ASM_IN_APP_DIR                 10108
#define ID_FUSLOG_REPROBE_REQUIRED                       10109
#define ID_FUSLOG_DUPLICATE_ASM_COMMIT                   10110
#define ID_FUSLOG_COPY_FILE_FAILURE                      10112
#define ID_FUSLOG_INVALID_LOCATION_INFO                  10113
#define ID_FUSLOG_ASYNC_CFG_DOWNLOAD_SUCCESS             10114
#define ID_FUSLOG_ASYNC_CFG_DOWNLOAD_FAILURE             10115
#define ID_FUSLOG_CACHE_ITEM_CREATE_FAILURE              10116
#define ID_FUSLOG_CACHE_ITEM_COMMIT_FAILURE              10117


#define ID_FUSLOG_OPERATION_SUCCESSFUL                   10118
#define ID_FUSLOG_OPERATION_FAILED                       10119
#define ID_FUSLOG_DETAILED_LOG                           10120
#define ID_FUSLOG_HEADER_TEXT                            10121
#define ID_FUSLOG_BIND_RESULT_TEXT                       10122
#define ID_FUSLOG_NO_DESCRIPTION                         10123
#define ID_FUSLOG_FUSION_DLL_PATH                        10124
#define ID_FUSLOG_EXECUTABLE                             10125

#define ID_FUSLOG_QUALIFIED_ASSEMBLY                     10126
#define ID_FUSLOG_CALLING_ASSEMBLY                       10127

#define ID_FUSLOG_CFG_ASSEMBLY_STORE                     10128

#define ID_FUSLOG_ISEQUAL_DIFF_RETARGET                  10130
#define ID_FUSLOG_RETARGET_CFG_MISSING                   10131
#define ID_FUSLOG_RETARGET_CFG_NAME_REDIRECT             10132
#define ID_FUSLOG_RETARGET_CFG_VER_REDIRECT              10133
#define ID_FUSLOG_RETARGET_CFG_PKT_REDIRECT              10134
#define ID_FUSLOG_XML_PARSE_ERROR_MEMORY                 10135
#define ID_FUSLOG_XML_BINDINGRETARGET_INSUFFICIENT_DATA  10136
#define ID_FUSLOG_XML_INVALID_PROCESSORARCHITECTURE      10137

#define ID_FUSLOG_BIND_SUCCESS                           10139

#define ID_FUSLOG_CROSS_SITE_REDIRECT                    10140
#define ID_FUSLOG_DISALLOW_APPLY_PUB_POLICY              10141
#define ID_FUSLOG_DISALLOW_APP_BINDING_REDIRECTS         10142
#define ID_FUSLOG_DISALLOW_APP_BASE_PROBING              10143
#define ID_FUSLOG_INSPECTION_ONLY                        10144
#define ID_FUSLOG_SHOW_START_LOAD_CONTEXT                10145
#define ID_FUSLOG_SHOW_RESULT_LOAD_CONTEXT               10146
#define ID_FUSLOG_LOAD_CONTEXT_PA_MISMATCH               10147

#define ID_FUSLOG_FX_CFG_MISSING                         10150
#define ID_FUSLOG_FX_CFG_VER_REDIRECT                    10151
#define ID_FUSLOG_APPLIESTO_DUPLICATE                    10152

#define ID_FUSLOG_PREBIND_INFO_DEVOVERRIDE_GLOBAL        10153
#define ID_FUSLOG_PREBIND_INFO_DEVOVERRIDE_LOCAL         10154
#define ID_FUSLOG_DEVOVERRIDE_FOUND                      10155
#define ID_FUSLOG_DEVOVERRIDE_MISS                       10156
#define ID_FUSLOG_PREBIND_INFO_DEVPATH                   10157
#define ID_FUSLOG_ASSEMBLYSTORE_DUPLICATE                10158
#define ID_FUSLOG_DEVOVERRIDE_DUPLICATE                  10159

#define ID_FUSLOG_LOADCTX_HIT_HOST                       10160
#define ID_FUSLOG_HOST_RESOLVED                          10161
#define ID_FUSLOG_ADMIN_CFG_POLICY_CODEBASE              10162
#define ID_FUSLOG_PROCESSOR_ARCHITECTURE_LOCKED          10163
#define ID_FUSLOG_CHECK_HOST                             10164
#define ID_FUSLOG_NOT_IN_CLR_LOADED_LIST                 10165
#define ID_FUSLOG_IN_CLR_LOADED_LIST                     10166
#define ID_FUSLOG_HOST_STORE_RESOLVE_TRY                 10167
#define ID_FUSLOG_HOST_STORE_RESOLVE_FAILED              10168
#define ID_FUSLOG_HOST_STORE_NOT_AVAILABLE               10169

#define ID_FUSLOG_NGEN_BIND_FALL_BACK                    10170
#define ID_FUSLOG_NGEN_BIND_SUCCESS                      10171
#define ID_FUSLOG_NGEN_BIND_FAIL                         10172
#define ID_FUSLOG_NGEN_BIND_VALIDATE_START               10173
#define ID_FUSLOG_NGEN_BIND_LOADFROM_NOT_ALLOWED         10174
#define ID_FUSLOG_NGEN_BIND_IL_NOT_FOUND                 10175
#define ID_FUSLOG_NGEN_BIND_NO_INDEX                     10176
#define ID_FUSLOG_NGEN_BIND_START                        10177
#define ID_FUSLOG_NGEN_BIND_NGEN_REJECT_CONFIG_MASK      10178
#define ID_FUSLOG_NGEN_BIND_NO_MATCH                     10179
#define ID_FUSLOG_NGEN_BIND_REJECT_HOSTASM               10180
#define ID_FUSLOG_NGEN_BIND_REJECT_IL_SIG                10181
#define ID_FUSLOG_NGEN_BIND_REJECT_TIMESTAMP             10182
#define ID_FUSLOG_NGEN_BIND_REJECT_IL_NOT_FOUND          10183
#define ID_FUSLOG_NGEN_BIND_REJECT_APPBASE_NOT_FILE      10184
#define ID_FUSLOG_NGEN_BIND_LOAD_LOADCONTEXT_HIT         10185
#define ID_FUSLOG_NGEN_BIND_DEPEND_START                 10186
#define ID_FUSLOG_NGEN_BIND_DEPEND_REJECT_HOST_DISALLOW  10187
#define ID_FUSLOG_NGEN_BIND_DEPEND_REJECT_REF_DEF_MISMATCH 10188
#define ID_FUSLOG_NGEN_BIND_DEPEND_SUCCESS               10189
#define ID_FUSLOG_NGEN_BIND_LOAD_REJECT_IL_SIG           10190
#define ID_FUSLOG_NGEN_BIND_DEPEND_REJECT_NGEN_SIG       10191
#define ID_FUSLOG_NGEN_BIND_NGEN_LOAD_REJECT_CONFIG_MASK 10192
#define ID_FUSLOG_NGEN_BIND_LOAD_REJECT_NO_NATIVE_IMAGE  10193
#define ID_FUSLOG_NGEN_BIND_LOAD_REJECT_REF_DEF_MISMATCH 10194
#define ID_FUSLOG_NGEN_BIND_REJECT_NATIVEIMAGE_NOT_FOUND 10195
#define ID_FUSLOG_NGEN_BIND_REJECT_LOADER_EVAL_FAIL      10196
#define ID_FUSLOG_NGEN_BIND_VALIDATE_DEPENDENCIES        10197
#define ID_FUSLOG_NGEN_BIND_LOAD_DEPENDENCIES            10198
#define ID_FUSLOG_NGEN_BIND_VALIDATE_SUCCESS             10199
#define ID_FUSLOG_NGEN_BIND_VALIDATE_DEPENDENCIES_SUCCESS 10200
#define ID_FUSLOG_NGEN_BIND_LOAD_DEPENDENCIES_SUCCESS    10201
#define ID_FUSLOG_NGEN_BIND_SYSTEM_ASSEMBLY_NOT_AVAILABLE 10202
#define ID_FUSLOG_NGEN_BIND_IL_NOT_IN_GAC                10203
#define ID_FUSLOG_NGEN_BIND_IL_PROVIDED                  10204
#define ID_FUSLOG_NGEN_BIND_INDEX_CORRUPTION             10205
#define ID_FUSLOG_NGEN_BIND_NI_DEPEND_START              10206
#define ID_FUSLOG_NGEN_BIND_IL_DEPEND_START              10207
#define ID_FUSLOG_NGEN_BIND_IL_NO_NI                     10208
#define ID_FUSLOG_NGEN_BIND_MISSING_FOUND                10209
#define ID_FUSLOG_NGEN_BIND_REJECT_HOST_FOUND            10210
#define ID_FUSLOG_NGEN_BIND_REJECT_HARDBIND_HOST_NOT_ALLOW   10211

#define ID_FUSLOG_EXPLICIT_BIND_IJW                      10220
#define ID_FUSLOG_EXPLICIT_BIND_EXE                      10221
#define ID_FUSLOG_EXPLICIT_BIND_IJW_BIND_FAIL            10222
#define ID_FUSLOG_EXPLICIT_BIND_IJW_PATH_DIFF            10223
#define ID_FUSLOG_EXPLICIT_BIND_IJW_PATH_MATCH           10224
#define ID_FUSLOG_EXPLICIT_BIND_IJW_NOT_FOUND            10225
#define ID_FUSLOG_EXPLICIT_BIND_EXE_LOADCONTEXT_COLLISION 10226

#define ID_FUSLOG_PREBIND_INFO_USER_NAME                 10230
#define ID_FUSLOG_PUBLISHER_POLICY_CONFIG_MISSING        10231

#define ID_FUSLOG_UNSUPPORTED_LINKED_CONFIGURATION       10300
#define ID_FUSLOG_LINKED_CONFIGURATION_PARSE_ERROR       10301
#define ID_FUSLOG_LINKED_CONFIGURATION_DUPLICATE         10302
#define ID_FUSLOG_PROCESSING_LINKED_CONFIGURATION        10303

#define ID_FUSLOG_ISEQUAL_DIFF_PROCESSOR_ARCHITECTURE    10310

#define ID_FUSLOG_WHERE_REF_APPLY_POLICY                 10320
#define ID_FUSLOG_SWITCH_TO_DEFAULT_CONTEXT              10321
#define ID_FUSLOG_SWITCH_TO_LOADFROM_CONTEXT             10322
#define ID_FUSLOG_WHERE_REF_GAC_MATCH                    10323
#define ID_FUSLOG_WHERE_REF_GAC_MISMATCH                 10324
#define ID_FUSLOG_WHERE_REF_LOAD_CONTEXT_MATCH           10325
#define ID_FUSLOG_WHERE_REF_LOAD_CONTEXT_MISMATCH        10326
#define ID_FUSLOG_HOST_STORE_PARTIAL_NAME_SKIP           10327
#define ID_FUSLOG_MISSING_CACHE_FILE                     10328
#define ID_FUSLOG_HOST_GAC_ASM_MISMATCH                  10329
#define ID_FUSLOG_HOST_RESULT                            10330
#define ID_FUSLOG_HOST_NO_DEBUG_STREAM                   10331
#define ID_FUSLOG_APP_CONFIG_FILE                        10332
#define ID_FUSLOG_NO_APP_CONFIG_FILE                     10333
#define ID_FUSLOG_ASSEMBLY_NAME_DEF                      10334
#define ID_FUSLOG_PREVIOUS_FAILED                        10335
#define ID_FUSLOG_LOADFROM_DEFAULT_MISMATCH              10336
#define ID_FUSLOG_LOADER_PERMISSION_CHECK_FAILURE        10337
#define ID_FUSLOG_INCOMPATIBLE_PROCESSOR_ARCHITECTURE    10338

#define ID_FUSLOG_LOG_TURNED_OFF                         10990
#define ID_FUSLOG_LOG_TURN_ON_HKLM                       10991
#define ID_FUSLOG_LOG_PERF_WARNING                       10992
#define ID_FUSLOG_LOG_TURN_OFF_HKLM                      10993

#define ID_FUSLOG_PARTIAL_BIND_DEBUG                     11000

#endif  // __FUSION_RESOURCE_H_
