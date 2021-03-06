/*
* Copyright (c) 2020 Bitdefender
* SPDX-License-Identifier: Apache-2.0
*/

#ifndef _HVSTATUS_H_
#define _HVSTATUS_H_

#include "cx_status_defs.h"

//
// Success
//
#define STATUS_EMU_DONT_ADVANCE_RIP                     CX_MAKE_STATUS(CX_STATUS_SEVERITY_SUCCESS, CX_FACILITY_DACIA_NAPOCA, 0x00000001L)
#define STATUS_EXECUTE_ORIGINAL_HANDLER                 CX_MAKE_STATUS(CX_STATUS_SEVERITY_SUCCESS, CX_FACILITY_DACIA_NAPOCA, 0x00000002L)
#define STATUS_SET_POST_HOOK                            CX_MAKE_STATUS(CX_STATUS_SEVERITY_SUCCESS, CX_FACILITY_DACIA_NAPOCA, 0x00000003L)

//
// Informational / hint
//
#define STATUS_LAPIC_ENABLED_NMI_WINDOW_EXIT            CX_MAKE_STATUS(CX_STATUS_SEVERITY_INFORMATIONAL, CX_FACILITY_DACIA_NAPOCA, 0x00000007L)
#define STATUS_LAPIC_ENABLED_INTR_WINDOW_EXIT           CX_MAKE_STATUS(CX_STATUS_SEVERITY_INFORMATIONAL, CX_FACILITY_DACIA_NAPOCA, 0x00000008L)
#define STATUS_UPDATE_RIP                               CX_MAKE_STATUS(CX_STATUS_SEVERITY_INFORMATIONAL, CX_FACILITY_DACIA_NAPOCA, 0x0000000DL)
#define STATUS_DBG_COMMAND_PROCESSING_IN_PROGRESS       CX_MAKE_STATUS(CX_STATUS_SEVERITY_INFORMATIONAL, CX_FACILITY_DACIA_NAPOCA, 0x0000000FL)

//
// Warning
//
#define STATUS_CANT_FREE_A_STATIC_MDL           CX_MAKE_STATUS(CX_STATUS_SEVERITY_WARNING, CX_FACILITY_DACIA_NAPOCA, 0x00000001L)
#define STATUS_INCOMPLETE_ALLOC_MDL_OVERFLOW    CX_MAKE_STATUS(CX_STATUS_SEVERITY_WARNING, CX_FACILITY_DACIA_NAPOCA, 0x00000003L)

//
// Error
//
#define STATUS_STATIC_MDL_TOO_SMALL             CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000005L)
#define STATUS_PP_INCONSISTENCY                 CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000006L)
#define STATUS_INVALID_MDL                      CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000007L)
#define STATUS_INVALID_MDL_HINT                 CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000008L)
#define STATUS_ADDRESS_NOT_FOUND_IN_PFN         CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000009L)
#define STATUS_NOT_A_VALID_DYNAMIC_VA           CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x0000000FL)
#define STATUS_NO_MAPPING_STRUCTURES            CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000013L)
#define STATUS_INVALID_MMAP                     CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000014L)
#define STATUS_OVERLAP_VIOLATION                CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000015L)
#define STATUS_PAGE_NOT_PRESENT                 CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000016L)
#define STATUS_NOT_A_VALID_POINTER              CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000020L)
#define STATUS_HV_UNLOAD_REQUESTED_INTERNALLY   CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000021L)
#define STATUS_INVALID_PHYSICAL_ADDRESS         CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000026L)
#define STATUS_INVALID_MEMORY_TYPE              CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000028L)
#define STATUS_OPTION_OR_FLAG_NOT_SUPPORTED     CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x0000002AL)

// spinlock statuses
#define STATUS_TOO_MANY_ACQUIRES                CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x0000002CL)
#define STATUS_TOO_MANY_WAITERS                 CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x0000002DL)
#define STATUS_NOT_ACQUIRED                     CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x0000002EL)
#define STATUS_TOO_MANY_RELEASES                CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x0000002FL)

// heap statuses
#define STATUS_HEAP_NO_FREE_CHUNK_FOUND         CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000031L)
#define STATUS_HEAP_LAST_FIT_INDEX_NOT_SET      CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000032L)

// hook and callback related
#define STATUS_TOO_MANY_HOOKS                   CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000040L)
#define STATUS_HOOK_ALREADY_SET                 CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000041L)
#define STATUS_HOOK_ALREADY_SET_GLOBAL          CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000042L)
#define STATUS_NO_HOOK_MATCHED                  CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000043L)
#define STATUS_NEEDS_EMULATION                  CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000044L)
#define STATUS_EXECUTE_ON_BARE_METAL            CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000045L)
#define STATUS_INVALID_INSTRUX                  CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000046L)
#define STATUS_NO_EMHV_INITIALIZED              CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000047L)
#define STATUS_INJECT_GP                        CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000048L)
#define STATUS_INJECT_UD                        CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000049L)

// device specific
#define STATUS_TOO_MANY_DEVICES                 CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x000000D1L)

// ring buffer specific
#define STATUS_SHMEM_LIMIT_REACHED              CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x000000E0L)

// emulator specific
#define STATUS_EMU_EXCEPTION_INJECTED           CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x000000F0L)
#define STATUS_EMU_PAGE_FAULT                   CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x000000F1L)
#define STATUS_CANNOT_ACTIVATE_VMX_CONTROL      CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x000000F2L)
#define STATUS_TESTCASE_FAILED                  CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x000000F3L)

// RTC specific
#define STATUS_GS_COOKIE_BITTEN                 CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000280L)
#define STATUS_GS_INEQUAL_STACK_OFFSETS         CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000281L)
#define STATUS_GS_INVALID_OLD_STACK             CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000282L)
#define STATUS_GS_INVALID_NEW_STACK             CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000283L)
#define STATUS_GS_RANGE_CHECK_FAILURE           CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000284L)
#define STATUS_GS_HANDLER_CHECK_FAILURE         CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000285L)
#define STATUS_ACCESS_REQUIREMENTS_NOT_MET      CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000288L)
#define STATUS_RTC_SHUTDOWN                     CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000289L)
#define STATUS_RTC_INIT_BASE                    CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x0000028AL)
#define STATUS_RTC_STACK_CORRUPT                CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x0000028BL)

#define STATUS_ACPI_FATAL                       CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000501L)

// EPT specific
#define STATUS_EMPTY_MAPPING                    CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000600L)

#define STATUS_DUPLICATE_KEY                    CX_MAKE_STATUS(CX_STATUS_SEVERITY_ERROR, CX_FACILITY_DACIA_NAPOCA, 0x00000700L)

#endif