
/**
 *  @file mapsystemattrsize.C
 *
 *  @brief Interface to get the map of system target attributes with respective
 *  attribute size
 */

// STD
#include <map>

// TARG
#include <mapsystemattrsize.H>


//******************************************************************************
// Macros
//******************************************************************************

#undef TARG_NAMESPACE
#undef TARG_CLASS
#undef TARG_FUNC

//******************************************************************************
// Implementation
//******************************************************************************

namespace TARGETING
{


#define TARG_NAMESPACE "TARGETING::"
#define TARG_CLASS "MapSystemAttrSize::"

//******************************************************************************
// TARGETING::mapSystemAttrSize
//******************************************************************************

TARGETING::MapSystemAttrSize& mapSystemAttrSize()
{
    #define TARG_FN "mapSystemAttrSize()"

    return TARG_GET_SINGLETON(TARGETING::theMapSystemAttrSize);

    #undef TARG_FN
}

//******************************************************************************
// TARGETING::MapSystemAttrSize::~MapSystemAttrSize
//******************************************************************************

MapSystemAttrSize::~MapSystemAttrSize()
{
    #define TARG_FN "~MapSystemAttrSize()"
    #undef TARG_FN
}

//******************************************************************************
// TARGETING::MapSystemAttrSize::getMapForWriteableSystemAttributes
//******************************************************************************

const AttrSizeMapper&
MapSystemAttrSize::getMapForWriteableSystemAttributes() const
{
    #define TARG_FN "getMapForWriteableSystemAttributes()"
    TARG_ENTER();

    TARG_EXIT();
    return iv_mapSysAttrSize;

    #undef TARG_FN
}

//******************************************************************************
// TARGETING::MapSystemAttrSize::MapSystemAttrSize
//******************************************************************************

MapSystemAttrSize::MapSystemAttrSize()
{
    #define TARG_FN "MapSystemAttrSize()"

    iv_mapSysAttrSize[ATTR_ALLOW_ATTR_OVERRIDES] = sizeof(ATTR_ALLOW_ATTR_OVERRIDES_type);
    iv_mapSysAttrSize[ATTR_FUSED_CORE_MODE_HB] = sizeof(ATTR_FUSED_CORE_MODE_HB_type);
    iv_mapSysAttrSize[ATTR_MEM_IGNORE_PLUG_RULES_SPD_REV_CHECK] = sizeof(ATTR_MEM_IGNORE_PLUG_RULES_SPD_REV_CHECK_type);
    iv_mapSysAttrSize[ATTR_ODY_DRAMINIT_FIR_CHECK_ENABLE] = sizeof(ATTR_ODY_DRAMINIT_FIR_CHECK_ENABLE_type);
    iv_mapSysAttrSize[ATTR_WOF_TABLE_LID_NUMBER] = sizeof(ATTR_WOF_TABLE_LID_NUMBER_type);
    iv_mapSysAttrSize[ATTR_XSTOP_ON_SPATTN] = sizeof(ATTR_XSTOP_ON_SPATTN_type);
    iv_mapSysAttrSize[ATTR_SCRATCH_UINT64_2] = sizeof(ATTR_SCRATCH_UINT64_2_type);
    iv_mapSysAttrSize[ATTR_MIN_FREQ_MHZ] = sizeof(ATTR_MIN_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_WOF_TABLE_OVERRIDE_RC] = sizeof(ATTR_WOF_TABLE_OVERRIDE_RC_type);
    iv_mapSysAttrSize[ATTR_PAYLOAD_IN_MIRROR_MEM] = sizeof(ATTR_PAYLOAD_IN_MIRROR_MEM_type);
    iv_mapSysAttrSize[ATTR_NEST_PLL_BUCKET] = sizeof(ATTR_NEST_PLL_BUCKET_type);
    iv_mapSysAttrSize[ATTR_TPM_REQUIRED] = sizeof(ATTR_TPM_REQUIRED_type);
    iv_mapSysAttrSize[ATTR_SCRATCH_UINT8_1] = sizeof(ATTR_SCRATCH_UINT8_1_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_COMPAT_FREQ_MHZ] = sizeof(ATTR_SYSTEM_COMPAT_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_WOF_TABLE_OVERRIDE_SP] = sizeof(ATTR_WOF_TABLE_OVERRIDE_SP_type);
    iv_mapSysAttrSize[ATTR_PM_HALT_FFDC_ENABLE] = sizeof(ATTR_PM_HALT_FFDC_ENABLE_type);
    iv_mapSysAttrSize[ATTR_HW_DECONFIG] = sizeof(ATTR_HW_DECONFIG_type);
    iv_mapSysAttrSize[ATTR_MSS_VOLT_DDR4_VDDR_SLOPE_POST_DRAM_INIT] = sizeof(ATTR_MSS_VOLT_DDR4_VDDR_SLOPE_POST_DRAM_INIT_type);
    iv_mapSysAttrSize[ATTR_WOF_TABLE_OVERRIDE_FF] = sizeof(ATTR_WOF_TABLE_OVERRIDE_FF_type);
    iv_mapSysAttrSize[ATTR_PLL_BUCKET_BUILD_INDEX] = sizeof(ATTR_PLL_BUCKET_BUILD_INDEX_type);
    iv_mapSysAttrSize[ATTR_TURBO_FREQ_MHZ] = sizeof(ATTR_TURBO_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_RAW_MTM] = sizeof(ATTR_RAW_MTM_type);
    iv_mapSysAttrSize[ATTR_FREQ_PB_MHZ] = sizeof(ATTR_FREQ_PB_MHZ_type);
    iv_mapSysAttrSize[ATTR_ENABLE_FIR_UNMASKING] = sizeof(ATTR_ENABLE_FIR_UNMASKING_type);
    iv_mapSysAttrSize[ATTR_NO_XSCOM_ENFORCEMENT] = sizeof(ATTR_NO_XSCOM_ENFORCEMENT_type);
    iv_mapSysAttrSize[ATTR_MFG_FLAGS] = sizeof(ATTR_MFG_FLAGS_type);
    iv_mapSysAttrSize[ATTR_WOF_TABLE_OVERRIDE_WB] = sizeof(ATTR_WOF_TABLE_OVERRIDE_WB_type);
    iv_mapSysAttrSize[ATTR_ISTEP_CALLOUT_INJECT_ENABLE] = sizeof(ATTR_ISTEP_CALLOUT_INJECT_ENABLE_type);
    iv_mapSysAttrSize[ATTR_ODY_DRAMINIT_RECOVERY_ENABLE] = sizeof(ATTR_ODY_DRAMINIT_RECOVERY_ENABLE_type);
    iv_mapSysAttrSize[ATTR_SKIP_WAKEUP] = sizeof(ATTR_SKIP_WAKEUP_type);
    iv_mapSysAttrSize[ATTR_RECONFIG_LOOP_TESTS_ENABLE] = sizeof(ATTR_RECONFIG_LOOP_TESTS_ENABLE_type);
    iv_mapSysAttrSize[ATTR_SKIP_HBRT_ATTR_UPDATE] = sizeof(ATTR_SKIP_HBRT_ATTR_UPDATE_type);
    iv_mapSysAttrSize[ATTR_PAYLOAD_KIND] = sizeof(ATTR_PAYLOAD_KIND_type);
    iv_mapSysAttrSize[ATTR_CHECK_ATTN_AFTER_ISTEP_FAIL] = sizeof(ATTR_CHECK_ATTN_AFTER_ISTEP_FAIL_type);
    iv_mapSysAttrSize[ATTR_SPARE_CORE_ACTIONS_DISABLED] = sizeof(ATTR_SPARE_CORE_ACTIONS_DISABLED_type);
    iv_mapSysAttrSize[ATTR_SOCKET_POWER_TURBO] = sizeof(ATTR_SOCKET_POWER_TURBO_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_IPL_PHASE] = sizeof(ATTR_SYSTEM_IPL_PHASE_type);
    iv_mapSysAttrSize[ATTR_MSS_INTERLEAVE_ENABLE] = sizeof(ATTR_MSS_INTERLEAVE_ENABLE_type);
    iv_mapSysAttrSize[ATTR_OCC_MIN_FREQ_MHZ] = sizeof(ATTR_OCC_MIN_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_MEM_IGNORE_PLUG_RULES_DIMM_SIZE_MIX] = sizeof(ATTR_MEM_IGNORE_PLUG_RULES_DIMM_SIZE_MIX_type);
    iv_mapSysAttrSize[ATTR_PROC_FAVOR_AGGRESSIVE_PREFETCH] = sizeof(ATTR_PROC_FAVOR_AGGRESSIVE_PREFETCH_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_MAX_OPERATING_FREQ_MHZ] = sizeof(ATTR_SYSTEM_MAX_OPERATING_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_QME_STOP_PHANTOM_HALT_ENABLE] = sizeof(ATTR_QME_STOP_PHANTOM_HALT_ENABLE_type);
    iv_mapSysAttrSize[ATTR_ALLOW_EEPROM_WRITES] = sizeof(ATTR_ALLOW_EEPROM_WRITES_type);
    iv_mapSysAttrSize[ATTR_FREQ_PB_MHZ_POUNDV_FALLBACK] = sizeof(ATTR_FREQ_PB_MHZ_POUNDV_FALLBACK_type);
    iv_mapSysAttrSize[ATTR_PROC_L2_HASH_DISABLE] = sizeof(ATTR_PROC_L2_HASH_DISABLE_type);
    iv_mapSysAttrSize[ATTR_SCRATCH_UINT64_1] = sizeof(ATTR_SCRATCH_UINT64_1_type);
    iv_mapSysAttrSize[ATTR_HOTPLUG] = sizeof(ATTR_HOTPLUG_type);
    iv_mapSysAttrSize[ATTR_MEM_IGNORE_PLUG_RULES_DIMM_HEIGHT_MIX] = sizeof(ATTR_MEM_IGNORE_PLUG_RULES_DIMM_HEIGHT_MIX_type);
    iv_mapSysAttrSize[ATTR_IS_SIMULATION] = sizeof(ATTR_IS_SIMULATION_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_CORECACHE_SKEWADJ_DISABLE] = sizeof(ATTR_SYSTEM_CORECACHE_SKEWADJ_DISABLE_type);
    iv_mapSysAttrSize[ATTR_RT_DECONFIG_FAILED] = sizeof(ATTR_RT_DECONFIG_FAILED_type);
    iv_mapSysAttrSize[ATTR_NVDIMM_AUTO_ARM] = sizeof(ATTR_NVDIMM_AUTO_ARM_type);
    iv_mapSysAttrSize[ATTR_FABRIC_TO_PHYSICAL_NODE_MAP] = sizeof(ATTR_FABRIC_TO_PHYSICAL_NODE_MAP_type);
    iv_mapSysAttrSize[ATTR_NVDIMM_ENCRYPTION_ENABLE] = sizeof(ATTR_NVDIMM_ENCRYPTION_ENABLE_type);
    iv_mapSysAttrSize[ATTR_SCRATCH_UINT8_2] = sizeof(ATTR_SCRATCH_UINT8_2_type);
    iv_mapSysAttrSize[ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE] = sizeof(ATTR_PROC_FABRIC_TOPOLOGY_ID_TABLE_type);
    iv_mapSysAttrSize[ATTR_NVDIMM_ENCRYPTION_KEYS_ANCHOR] = sizeof(ATTR_NVDIMM_ENCRYPTION_KEYS_ANCHOR_type);
    iv_mapSysAttrSize[ATTR_MEM_EFF_DDR5_MIN_SUPPORTED_SPD_REVISION] = sizeof(ATTR_MEM_EFF_DDR5_MIN_SUPPORTED_SPD_REVISION_type);
    iv_mapSysAttrSize[ATTR_MRW_HW_MIRRORING_ENABLE] = sizeof(ATTR_MRW_HW_MIRRORING_ENABLE_type);
    iv_mapSysAttrSize[ATTR_RECONFIGURE_LOOP] = sizeof(ATTR_RECONFIGURE_LOOP_type);
    iv_mapSysAttrSize[ATTR_PAYLOAD_ENTRY] = sizeof(ATTR_PAYLOAD_ENTRY_type);
    iv_mapSysAttrSize[ATTR_OMI_CRC_DEBUG] = sizeof(ATTR_OMI_CRC_DEBUG_type);
    iv_mapSysAttrSize[ATTR_MSL_CHECK] = sizeof(ATTR_MSL_CHECK_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_MMA_POWERON_DISABLE] = sizeof(ATTR_SYSTEM_MMA_POWERON_DISABLE_type);
    iv_mapSysAttrSize[ATTR_TEST_NEGATIVE_FCN] = sizeof(ATTR_TEST_NEGATIVE_FCN_type);
    iv_mapSysAttrSize[ATTR_SMP_CONNECTION_STATE] = sizeof(ATTR_SMP_CONNECTION_STATE_type);
    iv_mapSysAttrSize[ATTR_LMB_SIZE] = sizeof(ATTR_LMB_SIZE_type);
    iv_mapSysAttrSize[ATTR_HDAT_HBRT_SECTION_SIZE] = sizeof(ATTR_HDAT_HBRT_SECTION_SIZE_type);
    iv_mapSysAttrSize[ATTR_VPD_POWERSAVE_MIN_FREQ_MHZ] = sizeof(ATTR_VPD_POWERSAVE_MIN_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_MIN_PROC_POWER_PER_CHIP] = sizeof(ATTR_MIN_PROC_POWER_PER_CHIP_type);
    iv_mapSysAttrSize[ATTR_PLCK_IPL_ATTR_OVERRIDES_EXIST] = sizeof(ATTR_PLCK_IPL_ATTR_OVERRIDES_EXIST_type);
    iv_mapSysAttrSize[ATTR_WOF_TABLE_OVERRIDE_UT] = sizeof(ATTR_WOF_TABLE_OVERRIDE_UT_type);
    iv_mapSysAttrSize[ATTR_IPL_TYPE] = sizeof(ATTR_IPL_TYPE_type);
    iv_mapSysAttrSize[ATTR_MC_PLL_BUCKET] = sizeof(ATTR_MC_PLL_BUCKET_type);
    iv_mapSysAttrSize[ATTR_QME_BROADSIDE_SCAN] = sizeof(ATTR_QME_BROADSIDE_SCAN_type);
    iv_mapSysAttrSize[ATTR_HDAT_RSV_MEM_NUM_SECTIONS] = sizeof(ATTR_HDAT_RSV_MEM_NUM_SECTIONS_type);
    iv_mapSysAttrSize[ATTR_COLLECT_ONLY_CLOCK_ON_DATA] = sizeof(ATTR_COLLECT_ONLY_CLOCK_ON_DATA_type);
    iv_mapSysAttrSize[ATTR_ENABLED_THREADS] = sizeof(ATTR_ENABLED_THREADS_type);
    iv_mapSysAttrSize[ATTR_PROC_EPS_READ_CYCLES_T0] = sizeof(ATTR_PROC_EPS_READ_CYCLES_T0_type);
    iv_mapSysAttrSize[ATTR_NO_RECONFIG_ON_DECONFIG] = sizeof(ATTR_NO_RECONFIG_ON_DECONFIG_type);
    iv_mapSysAttrSize[ATTR_HDAT_HBRT_NUM_SECTIONS] = sizeof(ATTR_HDAT_HBRT_NUM_SECTIONS_type);
    iv_mapSysAttrSize[ATTR_PROC_FABRIC_CORE_FREQ_RATIO] = sizeof(ATTR_PROC_FABRIC_CORE_FREQ_RATIO_type);
    iv_mapSysAttrSize[ATTR_HOSTBOOT_TIME_OUT] = sizeof(ATTR_HOSTBOOT_TIME_OUT_type);
    iv_mapSysAttrSize[ATTR_PROC_FABRIC_PRESENT_GROUPS] = sizeof(ATTR_PROC_FABRIC_PRESENT_GROUPS_type);
    iv_mapSysAttrSize[ATTR_FREQ_PROC_REFCLOCK_ACTUAL_KHZ] = sizeof(ATTR_FREQ_PROC_REFCLOCK_ACTUAL_KHZ_type);
    iv_mapSysAttrSize[ATTR_KEY_CLEAR_REQUEST] = sizeof(ATTR_KEY_CLEAR_REQUEST_type);
    iv_mapSysAttrSize[ATTR_HWAS_STATE_CHANGED_FLAG] = sizeof(ATTR_HWAS_STATE_CHANGED_FLAG_type);
    iv_mapSysAttrSize[ATTR_XGPE_PHANTOM_HALT_ENABLE] = sizeof(ATTR_XGPE_PHANTOM_HALT_ENABLE_type);
    iv_mapSysAttrSize[ATTR_BOOT_FLAGS] = sizeof(ATTR_BOOT_FLAGS_type);
    iv_mapSysAttrSize[ATTR_HOSTSVC_PLID] = sizeof(ATTR_HOSTSVC_PLID_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_FUSED_CORE_PAIRED_DISABLE] = sizeof(ATTR_SYSTEM_FUSED_CORE_PAIRED_DISABLE_type);
    iv_mapSysAttrSize[ATTR_ODY_DRAMINIT_STEP_ENABLE] = sizeof(ATTR_ODY_DRAMINIT_STEP_ENABLE_type);
    iv_mapSysAttrSize[ATTR_XSCOM_BASE_ADDRESS] = sizeof(ATTR_XSCOM_BASE_ADDRESS_type);
    iv_mapSysAttrSize[ATTR_WTH_OVERRIDE_CORE_COUNT_INDEX] = sizeof(ATTR_WTH_OVERRIDE_CORE_COUNT_INDEX_type);
    iv_mapSysAttrSize[ATTR_FUSED_CORE_PAIRED_MODE_ENABLED] = sizeof(ATTR_FUSED_CORE_PAIRED_MODE_ENABLED_type);
    iv_mapSysAttrSize[ATTR_EECACHE_DISABLE_AUTO_RESET] = sizeof(ATTR_EECACHE_DISABLE_AUTO_RESET_type);
    iv_mapSysAttrSize[ATTR_HW_RECONFIG_CURRENT_ITR] = sizeof(ATTR_HW_RECONFIG_CURRENT_ITR_type);
    iv_mapSysAttrSize[ATTR_LOCK_SERVICE_LOCK] = sizeof(ATTR_LOCK_SERVICE_LOCK_type);
    iv_mapSysAttrSize[ATTR_SECURITY_ENABLE] = sizeof(ATTR_SECURITY_ENABLE_type);
    iv_mapSysAttrSize[ATTR_LPC_BUS_ADDR] = sizeof(ATTR_LPC_BUS_ADDR_type);
    iv_mapSysAttrSize[ATTR_SAVED_STATE_UINT8] = sizeof(ATTR_SAVED_STATE_UINT8_type);
    iv_mapSysAttrSize[ATTR_CEC_IPL_TYPE] = sizeof(ATTR_CEC_IPL_TYPE_type);
    iv_mapSysAttrSize[ATTR_HB_SETTINGS] = sizeof(ATTR_HB_SETTINGS_type);
    iv_mapSysAttrSize[ATTR_FREQ_SYSTEM_CORE_CEILING_MHZ] = sizeof(ATTR_FREQ_SYSTEM_CORE_CEILING_MHZ_type);
    iv_mapSysAttrSize[ATTR_ODY_DISABLE_DRAM_WITH_BAD_DQ0] = sizeof(ATTR_ODY_DISABLE_DRAM_WITH_BAD_DQ0_type);
    iv_mapSysAttrSize[ATTR_INCREASED_PAU_FREQ] = sizeof(ATTR_INCREASED_PAU_FREQ_type);
    iv_mapSysAttrSize[ATTR_PROC_FABRIC_A_INDIRECT] = sizeof(ATTR_PROC_FABRIC_A_INDIRECT_type);
    iv_mapSysAttrSize[ATTR_IS_TCES_MODE_ENABLE] = sizeof(ATTR_IS_TCES_MODE_ENABLE_type);
    iv_mapSysAttrSize[ATTR_PGPE_PHANTOM_HALT_ENABLE] = sizeof(ATTR_PGPE_PHANTOM_HALT_ENABLE_type);
    iv_mapSysAttrSize[ATTR_FREQ_CORE_CEILING_MHZ] = sizeof(ATTR_FREQ_CORE_CEILING_MHZ_type);
    iv_mapSysAttrSize[ATTR_MEM_IGNORE_PLUG_RULES] = sizeof(ATTR_MEM_IGNORE_PLUG_RULES_type);
    iv_mapSysAttrSize[ATTR_MAX_INTERLEAVE_GROUP_SIZE] = sizeof(ATTR_MAX_INTERLEAVE_GROUP_SIZE_type);
    iv_mapSysAttrSize[ATTR_DISABLE_PREDICTIVE_MEM_GUARD] = sizeof(ATTR_DISABLE_PREDICTIVE_MEM_GUARD_type);
    iv_mapSysAttrSize[ATTR_SPL_WAKEUP_STATE] = sizeof(ATTR_SPL_WAKEUP_STATE_type);
    iv_mapSysAttrSize[ATTR_FREQ_SYSTEM_CORE_FLOOR_MHZ_ORIGINAL] = sizeof(ATTR_FREQ_SYSTEM_CORE_FLOOR_MHZ_ORIGINAL_type);
    iv_mapSysAttrSize[ATTR_DISABLE_SECURITY] = sizeof(ATTR_DISABLE_SECURITY_type);
    iv_mapSysAttrSize[ATTR_RUNN_SRESET_THREADS_BVEC] = sizeof(ATTR_RUNN_SRESET_THREADS_BVEC_type);
    iv_mapSysAttrSize[ATTR_ECS_ERROR_COUNT_THRESHOLD] = sizeof(ATTR_ECS_ERROR_COUNT_THRESHOLD_type);
    iv_mapSysAttrSize[ATTR_LAST_KNOWN_CONFIGURED_MEM_SIZE_MB] = sizeof(ATTR_LAST_KNOWN_CONFIGURED_MEM_SIZE_MB_type);
    iv_mapSysAttrSize[ATTR_DECONFIG_BUT_NOT_GARDED] = sizeof(ATTR_DECONFIG_BUT_NOT_GARDED_type);
    iv_mapSysAttrSize[ATTR_SCRATCH_UINT32_1] = sizeof(ATTR_SCRATCH_UINT32_1_type);
    iv_mapSysAttrSize[ATTR_PAYLOAD_STARTED] = sizeof(ATTR_PAYLOAD_STARTED_type);
    iv_mapSysAttrSize[ATTR_LINK_TRAIN] = sizeof(ATTR_LINK_TRAIN_type);
    iv_mapSysAttrSize[ATTR_IS_IBM_SIMULATION] = sizeof(ATTR_IS_IBM_SIMULATION_type);
    iv_mapSysAttrSize[ATTR_PM_GLOBAL_FIR_TRACE_EN] = sizeof(ATTR_PM_GLOBAL_FIR_TRACE_EN_type);
    iv_mapSysAttrSize[ATTR_FFO_FREQ_MHZ] = sizeof(ATTR_FFO_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_PM_MALF_ALERT_ENABLE] = sizeof(ATTR_PM_MALF_ALERT_ENABLE_type);
    iv_mapSysAttrSize[ATTR_HB_HRMOR_NODAL_BASE] = sizeof(ATTR_HB_HRMOR_NODAL_BASE_type);
    iv_mapSysAttrSize[ATTR_LAST_IPLTIME_EID] = sizeof(ATTR_LAST_IPLTIME_EID_type);
    iv_mapSysAttrSize[ATTR_FREQ_SYSTEM_CORE_CEILING_MHZ_ORIGINAL] = sizeof(ATTR_FREQ_SYSTEM_CORE_CEILING_MHZ_ORIGINAL_type);
    iv_mapSysAttrSize[ATTR_PROC_FABRIC_R_INDIRECT_EN] = sizeof(ATTR_PROC_FABRIC_R_INDIRECT_EN_type);
    iv_mapSysAttrSize[ATTR_POWERSAVE_FREQ_MHZ] = sizeof(ATTR_POWERSAVE_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_PROC_L3_HASH_DISABLE] = sizeof(ATTR_PROC_L3_HASH_DISABLE_type);
    iv_mapSysAttrSize[ATTR_QME_HCODE_BLOCK_COUNT] = sizeof(ATTR_QME_HCODE_BLOCK_COUNT_type);
    iv_mapSysAttrSize[ATTR_EXP_MEM_PORT_POS_OF_FAIL_THROTTLE] = sizeof(ATTR_EXP_MEM_PORT_POS_OF_FAIL_THROTTLE_type);
    iv_mapSysAttrSize[ATTR_CHASSIS_LOCATION_CODE] = sizeof(ATTR_CHASSIS_LOCATION_CODE_type);
    iv_mapSysAttrSize[ATTR_POUND_V_STATIC_DATA_ENABLE] = sizeof(ATTR_POUND_V_STATIC_DATA_ENABLE_type);
    iv_mapSysAttrSize[ATTR_FREQ_SYSTEM_CORE_CEILING_MHZ_OVERRIDE] = sizeof(ATTR_FREQ_SYSTEM_CORE_CEILING_MHZ_OVERRIDE_type);
    iv_mapSysAttrSize[ATTR_IS_IPL_DECONFIG_ALLOWED] = sizeof(ATTR_IS_IPL_DECONFIG_ALLOWED_type);
    iv_mapSysAttrSize[ATTR_MEM_PORT_POS_OF_FAIL_THROTTLE] = sizeof(ATTR_MEM_PORT_POS_OF_FAIL_THROTTLE_type);
    iv_mapSysAttrSize[ATTR_OVERRIDE_FREQ_PROC_REFCLOCK] = sizeof(ATTR_OVERRIDE_FREQ_PROC_REFCLOCK_type);
    iv_mapSysAttrSize[ATTR_DISABLE_SPECIAL_WAKEUP_ON_SYSTEM] = sizeof(ATTR_DISABLE_SPECIAL_WAKEUP_ON_SYSTEM_type);
    iv_mapSysAttrSize[ATTR_PROC_FABRIC_TOPOLOGY_MODE] = sizeof(ATTR_PROC_FABRIC_TOPOLOGY_MODE_type);
    iv_mapSysAttrSize[ATTR_PAYLOAD_STATE] = sizeof(ATTR_PAYLOAD_STATE_type);
    iv_mapSysAttrSize[ATTR_CONTAINED_IPL_TYPE] = sizeof(ATTR_CONTAINED_IPL_TYPE_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_RESCLK_DISABLE] = sizeof(ATTR_SYSTEM_RESCLK_DISABLE_type);
    iv_mapSysAttrSize[ATTR_PROC_EPS_GB_PERCENTAGE] = sizeof(ATTR_PROC_EPS_GB_PERCENTAGE_type);
    iv_mapSysAttrSize[ATTR_ODY_DRAMINIT_ERROR_ON_FAILURE] = sizeof(ATTR_ODY_DRAMINIT_ERROR_ON_FAILURE_type);
    iv_mapSysAttrSize[ATTR_ISTEP_PAUSE_CONFIG] = sizeof(ATTR_ISTEP_PAUSE_CONFIG_type);
    iv_mapSysAttrSize[ATTR_CLOCK_PLL_MUX] = sizeof(ATTR_CLOCK_PLL_MUX_type);
    iv_mapSysAttrSize[ATTR_OMI_X4_DEGRADE_ACTION] = sizeof(ATTR_OMI_X4_DEGRADE_ACTION_type);
    iv_mapSysAttrSize[ATTR_DYNAMIC_INIT_MODE_VEC] = sizeof(ATTR_DYNAMIC_INIT_MODE_VEC_type);
    iv_mapSysAttrSize[ATTR_TEST_MIN_STRING] = sizeof(ATTR_TEST_MIN_STRING_type);
    iv_mapSysAttrSize[ATTR_WOF_TABLE_OVERRIDE_PS] = sizeof(ATTR_WOF_TABLE_OVERRIDE_PS_type);
    iv_mapSysAttrSize[ATTR_FORCE_SRAM_MMIO_OVER_I2C] = sizeof(ATTR_FORCE_SRAM_MMIO_OVER_I2C_type);
    iv_mapSysAttrSize[ATTR_SMF_MEM_AMT_REQUESTED] = sizeof(ATTR_SMF_MEM_AMT_REQUESTED_type);
    iv_mapSysAttrSize[ATTR_FREQ_PAU_MHZ] = sizeof(ATTR_FREQ_PAU_MHZ_type);
    iv_mapSysAttrSize[ATTR_PRD_DD1_OMI_DEGRADE_PREDICTIVE] = sizeof(ATTR_PRD_DD1_OMI_DEGRADE_PREDICTIVE_type);
    iv_mapSysAttrSize[ATTR_TEST_MAX_STRING] = sizeof(ATTR_TEST_MAX_STRING_type);
    iv_mapSysAttrSize[ATTR_MSS_VOLT_DDR4_VDDR_INTERCEPT_POST_DRAM_INIT] = sizeof(ATTR_MSS_VOLT_DDR4_VDDR_INTERCEPT_POST_DRAM_INIT_type);
    iv_mapSysAttrSize[ATTR_PROC_EPS_WRITE_CYCLES_T1] = sizeof(ATTR_PROC_EPS_WRITE_CYCLES_T1_type);
    iv_mapSysAttrSize[ATTR_SMF_CONFIG] = sizeof(ATTR_SMF_CONFIG_type);
    iv_mapSysAttrSize[ATTR_ISTEP_MODE] = sizeof(ATTR_ISTEP_MODE_type);
    iv_mapSysAttrSize[ATTR_HWAS_STATE] = sizeof(ATTR_HWAS_STATE_type);
    iv_mapSysAttrSize[ATTR_DIMM_POWER_UTIL] = sizeof(ATTR_DIMM_POWER_UTIL_type);
    iv_mapSysAttrSize[ATTR_SYS_LOCATION_CODE] = sizeof(ATTR_SYS_LOCATION_CODE_type);
    iv_mapSysAttrSize[ATTR_WOFBASE_FREQ_MHZ] = sizeof(ATTR_WOFBASE_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_QME_HCODE_OFFSET] = sizeof(ATTR_QME_HCODE_OFFSET_type);
    iv_mapSysAttrSize[ATTR_ULTRA_TURBO_FREQ_MHZ] = sizeof(ATTR_ULTRA_TURBO_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_CORE_LPAR_MODE] = sizeof(ATTR_CORE_LPAR_MODE_type);
    iv_mapSysAttrSize[ATTR_CDM_POLICIES] = sizeof(ATTR_CDM_POLICIES_type);
    iv_mapSysAttrSize[ATTR_SECURE_SETTINGS] = sizeof(ATTR_SECURE_SETTINGS_type);
    iv_mapSysAttrSize[ATTR_PVR_82_MODE] = sizeof(ATTR_PVR_82_MODE_type);
    iv_mapSysAttrSize[ATTR_PROC_FABRIC_BROADCAST_MODE] = sizeof(ATTR_PROC_FABRIC_BROADCAST_MODE_type);
    iv_mapSysAttrSize[ATTR_DYNAMIC_INIT_MODE_COUNT] = sizeof(ATTR_DYNAMIC_INIT_MODE_COUNT_type);
    iv_mapSysAttrSize[ATTR_DISABLE_SBE_RUNTIME_RECOVERY] = sizeof(ATTR_DISABLE_SBE_RUNTIME_RECOVERY_type);
    iv_mapSysAttrSize[ATTR_ISTEP_PAUSE_ENABLE] = sizeof(ATTR_ISTEP_PAUSE_ENABLE_type);
    iv_mapSysAttrSize[ATTR_SYNC_BETWEEN_STEPS] = sizeof(ATTR_SYNC_BETWEEN_STEPS_type);
    iv_mapSysAttrSize[ATTR_PROC_EPS_WRITE_CYCLES_T2] = sizeof(ATTR_PROC_EPS_WRITE_CYCLES_T2_type);
    iv_mapSysAttrSize[ATTR_SBE_SELECT_EX_POLICY] = sizeof(ATTR_SBE_SELECT_EX_POLICY_type);
    iv_mapSysAttrSize[ATTR_PROC_EPS_READ_CYCLES_T2] = sizeof(ATTR_PROC_EPS_READ_CYCLES_T2_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_PSTATE0_FREQ_MHZ] = sizeof(ATTR_SYSTEM_PSTATE0_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_HWAS_STATE_TESTSAVE] = sizeof(ATTR_HWAS_STATE_TESTSAVE_type);
    iv_mapSysAttrSize[ATTR_CONTAINED_LOAD_PATH] = sizeof(ATTR_CONTAINED_LOAD_PATH_type);
    iv_mapSysAttrSize[ATTR_OMI_CHANNEL_FAIL_ACTION] = sizeof(ATTR_OMI_CHANNEL_FAIL_ACTION_type);
    iv_mapSysAttrSize[ATTR_SCRATCH_UINT32_2] = sizeof(ATTR_SCRATCH_UINT32_2_type);
    iv_mapSysAttrSize[ATTR_TEST_NULL_STRING] = sizeof(ATTR_TEST_NULL_STRING_type);
    iv_mapSysAttrSize[ATTR_PM_RESET_FFDC_ENABLE] = sizeof(ATTR_PM_RESET_FFDC_ENABLE_type);
    iv_mapSysAttrSize[ATTR_TEST_NO_DEFAULT_STRING] = sizeof(ATTR_TEST_NO_DEFAULT_STRING_type);
    iv_mapSysAttrSize[ATTR_DISABLE_HBBL_VECTORS] = sizeof(ATTR_DISABLE_HBBL_VECTORS_type);
    iv_mapSysAttrSize[ATTR_MSS_CONFIG_FREQ_LIMIT] = sizeof(ATTR_MSS_CONFIG_FREQ_LIMIT_type);
    iv_mapSysAttrSize[ATTR_PROC_FABRIC_ASYNC_MODE] = sizeof(ATTR_PROC_FABRIC_ASYNC_MODE_type);
    iv_mapSysAttrSize[ATTR_PIB_I2C_NEST_PLL] = sizeof(ATTR_PIB_I2C_NEST_PLL_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_CONFIG_TYPE] = sizeof(ATTR_SYSTEM_CONFIG_TYPE_type);
    iv_mapSysAttrSize[ATTR_MRW_DDR4_VDDR_MAX_LIMIT_POST_DRAM_INIT] = sizeof(ATTR_MRW_DDR4_VDDR_MAX_LIMIT_POST_DRAM_INIT_type);
    iv_mapSysAttrSize[ATTR_RESUME_PAYLOAD] = sizeof(ATTR_RESUME_PAYLOAD_type);
    iv_mapSysAttrSize[ATTR_PAYLOAD_BASE] = sizeof(ATTR_PAYLOAD_BASE_type);
    iv_mapSysAttrSize[ATTR_NOMINAL_FREQ_MHZ] = sizeof(ATTR_NOMINAL_FREQ_MHZ_type);
    iv_mapSysAttrSize[ATTR_SECURE_VERSION_LOCKIN_POLICY] = sizeof(ATTR_SECURE_VERSION_LOCKIN_POLICY_type);
    iv_mapSysAttrSize[ATTR_PROC_EPS_READ_CYCLES_T1] = sizeof(ATTR_PROC_EPS_READ_CYCLES_T1_type);
    iv_mapSysAttrSize[ATTR_ALG_TYPE_TO_ALG_TOKEN_CONTAINER] = sizeof(ATTR_ALG_TYPE_TO_ALG_TOKEN_CONTAINER_type);
    iv_mapSysAttrSize[ATTR_PROC_LCO_MODE_DISABLE] = sizeof(ATTR_PROC_LCO_MODE_DISABLE_type);
    iv_mapSysAttrSize[ATTR_NVDIMM_ENCRYPTION_KEYS_FW] = sizeof(ATTR_NVDIMM_ENCRYPTION_KEYS_FW_type);
    iv_mapSysAttrSize[ATTR_FREQ_SYSTEM_CORE_FLOOR_MHZ] = sizeof(ATTR_FREQ_SYSTEM_CORE_FLOOR_MHZ_type);
    iv_mapSysAttrSize[ATTR_RISK_LEVEL] = sizeof(ATTR_RISK_LEVEL_type);
    iv_mapSysAttrSize[ATTR_SYSTEM_CORECACHE_DCADJ_DISABLE] = sizeof(ATTR_SYSTEM_CORECACHE_DCADJ_DISABLE_type);
    iv_mapSysAttrSize[ATTR_FREQ_PAU_VPD_MHZ] = sizeof(ATTR_FREQ_PAU_VPD_MHZ_type);
    iv_mapSysAttrSize[ATTR_ISTEP_CALLOUT_INJECT_ACTION] = sizeof(ATTR_ISTEP_CALLOUT_INJECT_ACTION_type);
    iv_mapSysAttrSize[ATTR_IS_MPIPL] = sizeof(ATTR_IS_MPIPL_type);
    iv_mapSysAttrSize[ATTR_RUNN_MODE] = sizeof(ATTR_RUNN_MODE_type);
    iv_mapSysAttrSize[ATTR_MEM_OVERRIDE_FREQ_LIMITATION] = sizeof(ATTR_MEM_OVERRIDE_FREQ_LIMITATION_type);
    iv_mapSysAttrSize[ATTR_FSP_SECURITY_MODE] = sizeof(ATTR_FSP_SECURITY_MODE_type);
    iv_mapSysAttrSize[ATTR_FREQ_X_MHZ] = sizeof(ATTR_FREQ_X_MHZ_type);
    iv_mapSysAttrSize[ATTR_FUSED_CORE_OPTION] = sizeof(ATTR_FUSED_CORE_OPTION_type);
    iv_mapSysAttrSize[ATTR_EFFECTIVE_EC] = sizeof(ATTR_EFFECTIVE_EC_type);

    #undef TARG_FN
}

}// namespace TARGETING

