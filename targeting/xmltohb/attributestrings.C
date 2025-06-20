
/**
 *  @file attributestrings.C
 *
 *  @brief Attribute string implementation.  This file is autogenerated and
 *      should not be altered.
 */

//******************************************************************************
// Includes
//******************************************************************************

// STD
#include <stdint.h>
#include <stdlib.h>

// Targeting component
#include <targeting/common/attributes.H>

namespace TARGETING {

//******************************************************************************
// attrToString<ATTR_CDM_DOMAIN>
//******************************************************************************

template<>
const char* attrToString<ATTR_CDM_DOMAIN> (
    AttributeTraits<ATTR_CDM_DOMAIN>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case CDM_DOMAIN_NONE:
            return "NONE";
        case CDM_DOMAIN_CPU:
            return "CPU";
        case CDM_DOMAIN_DIMM:
            return "DIMM";
        case CDM_DOMAIN_FABRIC:
            return "FABRIC";
        case CDM_DOMAIN_MEM:
            return "MEM";
        case CDM_DOMAIN_IO:
            return "IO";
        case CDM_DOMAIN_NODE:
            return "NODE";
        case CDM_DOMAIN_CLOCK:
            return "CLOCK";
        case CDM_DOMAIN_PSI:
            return "PSI";
        case CDM_DOMAIN_FSP:
            return "FSP";
        case CDM_DOMAIN_SECURITY:
            return "SECURITY";
        case CDM_DOMAIN_ALL:
            return "ALL";
        case CDM_DOMAIN_INVALID:
            return "INVALID";
        default:
            return "Cannot decode CDM_DOMAIN";
    }
}

//******************************************************************************
// attrToString<ATTR_CHECK_ATTN_AFTER_ISTEP_FAIL>
//******************************************************************************

template<>
const char* attrToString<ATTR_CHECK_ATTN_AFTER_ISTEP_FAIL> (
    AttributeTraits<ATTR_CHECK_ATTN_AFTER_ISTEP_FAIL>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case CHECK_ATTN_AFTER_ISTEP_FAIL_DEFAULT:
            return "DEFAULT";
        case CHECK_ATTN_AFTER_ISTEP_FAIL_NO:
            return "NO";
        case CHECK_ATTN_AFTER_ISTEP_FAIL_INVALID:
            return "INVALID";
        default:
            return "Cannot decode CHECK_ATTN_AFTER_ISTEP_FAIL";
    }
}

//******************************************************************************
// attrToString<ATTR_CLASS>
//******************************************************************************

template<>
const char* attrToString<ATTR_CLASS> (
    AttributeTraits<ATTR_CLASS>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case CLASS_NA:
            return "NA";
        case CLASS_CARD:
            return "CARD";
        case CLASS_ENC:
            return "ENC";
        case CLASS_CHIP:
            return "CHIP";
        case CLASS_UNIT:
            return "UNIT";
        case CLASS_DEV:
            return "DEV";
        case CLASS_SYS:
            return "SYS";
        case CLASS_LOGICAL_CARD:
            return "LOGICAL_CARD";
        case CLASS_BATTERY:
            return "BATTERY";
        case CLASS_LED:
            return "LED";
        case CLASS_SP:
            return "SP";
        case CLASS_ASIC:
            return "ASIC";
        case CLASS_MAX:
            return "MAX";
        case CLASS_INVALID:
            return "INVALID";
        default:
            return "Cannot decode CLASS";
    }
}

//******************************************************************************
// attrToString<ATTR_EECACHE_VPD_STATE>
//******************************************************************************

template<>
const char* attrToString<ATTR_EECACHE_VPD_STATE> (
    AttributeTraits<ATTR_EECACHE_VPD_STATE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case EECACHE_VPD_STATE_VPD_GOOD:
            return "VPD_GOOD";
        case EECACHE_VPD_STATE_VPD_NEEDS_REFRESH:
            return "VPD_NEEDS_REFRESH";
        case EECACHE_VPD_STATE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode EECACHE_VPD_STATE";
    }
}

//******************************************************************************
// attrToString<ATTR_EEPROM_CONTENT_TYPE>
//******************************************************************************

template<>
const char* attrToString<ATTR_EEPROM_CONTENT_TYPE> (
    AttributeTraits<ATTR_EEPROM_CONTENT_TYPE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case EEPROM_CONTENT_TYPE_RAW:
            return "RAW";
        case EEPROM_CONTENT_TYPE_ISDIMM:
            return "ISDIMM";
        case EEPROM_CONTENT_TYPE_IBM_FRUVPD:
            return "IBM_FRUVPD";
        case EEPROM_CONTENT_TYPE_IBM_MVPD:
            return "IBM_MVPD";
        case EEPROM_CONTENT_TYPE_DDIMM:
            return "DDIMM";
        case EEPROM_CONTENT_TYPE_SBE_BOOT_CODE:
            return "SBE_BOOT_CODE";
        case EEPROM_CONTENT_TYPE_SBE_MEASUREMENT_CODE:
            return "SBE_MEASUREMENT_CODE";
        case EEPROM_CONTENT_TYPE_WOF_DATA:
            return "WOF_DATA";
        case EEPROM_CONTENT_TYPE_KEYSTORE:
            return "KEYSTORE";
        case EEPROM_CONTENT_TYPE_PLANAR_OCMB_SPD:
            return "PLANAR_OCMB_SPD";
        case EEPROM_CONTENT_TYPE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode EEPROM_CONTENT_TYPE";
    }
}

//******************************************************************************
// attrToString<ATTR_EEPROM_VPD_ACCESSIBILITY>
//******************************************************************************

template<>
const char* attrToString<ATTR_EEPROM_VPD_ACCESSIBILITY> (
    AttributeTraits<ATTR_EEPROM_VPD_ACCESSIBILITY>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case EEPROM_VPD_ACCESSIBILITY_NONE_DISABLED:
            return "NONE_DISABLED";
        case EEPROM_VPD_ACCESSIBILITY_CACHE_DISABLED:
            return "CACHE_DISABLED";
        case EEPROM_VPD_ACCESSIBILITY_PRIMARY_DISABLED:
            return "PRIMARY_DISABLED";
        case EEPROM_VPD_ACCESSIBILITY_SECONDARY_DISABLED:
            return "SECONDARY_DISABLED";
        case EEPROM_VPD_ACCESSIBILITY_LAST_DISABLED:
            return "LAST_DISABLED";
        case EEPROM_VPD_ACCESSIBILITY_INVALID:
            return "INVALID";
        default:
            return "Cannot decode EEPROM_VPD_ACCESSIBILITY";
    }
}

//******************************************************************************
// attrToString<ATTR_EEPROM_VPD_REDUNDANCY>
//******************************************************************************

template<>
const char* attrToString<ATTR_EEPROM_VPD_REDUNDANCY> (
    AttributeTraits<ATTR_EEPROM_VPD_REDUNDANCY>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case EEPROM_VPD_REDUNDANCY_POSSIBLE:
            return "POSSIBLE";
        case EEPROM_VPD_REDUNDANCY_PRESENT:
            return "PRESENT";
        case EEPROM_VPD_REDUNDANCY_NOT_PRESENT:
            return "NOT_PRESENT";
        case EEPROM_VPD_REDUNDANCY_INVALID:
            return "INVALID";
        default:
            return "Cannot decode EEPROM_VPD_REDUNDANCY";
    }
}

//******************************************************************************
// attrToString<ATTR_ENGINE_TYPE>
//******************************************************************************

template<>
const char* attrToString<ATTR_ENGINE_TYPE> (
    AttributeTraits<ATTR_ENGINE_TYPE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case ENGINE_TYPE_NA:
            return "NA";
        case ENGINE_TYPE_ENGINE_IIC:
            return "ENGINE_IIC";
        case ENGINE_TYPE_ENGINE_SCOM:
            return "ENGINE_SCOM";
        case ENGINE_TYPE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode ENGINE_TYPE";
    }
}

//******************************************************************************
// attrToString<ATTR_FOUND_PRESENT_BY_SP>
//******************************************************************************

template<>
const char* attrToString<ATTR_FOUND_PRESENT_BY_SP> (
    AttributeTraits<ATTR_FOUND_PRESENT_BY_SP>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case FOUND_PRESENT_BY_SP_NO_ATTEMPT:
            return "NO_ATTEMPT";
        case FOUND_PRESENT_BY_SP_FOUND:
            return "FOUND";
        case FOUND_PRESENT_BY_SP_MISSING:
            return "MISSING";
        case FOUND_PRESENT_BY_SP_SKIP:
            return "SKIP";
        case FOUND_PRESENT_BY_SP_INVALID:
            return "INVALID";
        default:
            return "Cannot decode FOUND_PRESENT_BY_SP";
    }
}

//******************************************************************************
// attrToString<ATTR_FSI_MASTER_TYPE>
//******************************************************************************

template<>
const char* attrToString<ATTR_FSI_MASTER_TYPE> (
    AttributeTraits<ATTR_FSI_MASTER_TYPE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case FSI_MASTER_TYPE_MFSI:
            return "MFSI";
        case FSI_MASTER_TYPE_CMFSI:
            return "CMFSI";
        case FSI_MASTER_TYPE_NO_MASTER:
            return "NO_MASTER";
        case FSI_MASTER_TYPE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode FSI_MASTER_TYPE";
    }
}

//******************************************************************************
// attrToString<ATTR_KEY_CLEAR_REQUEST>
//******************************************************************************

template<>
const char* attrToString<ATTR_KEY_CLEAR_REQUEST> (
    AttributeTraits<ATTR_KEY_CLEAR_REQUEST>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case KEY_CLEAR_REQUEST_NONE:
            return "NONE";
        case KEY_CLEAR_REQUEST_ALL:
            return "ALL";
        case KEY_CLEAR_REQUEST_OS_KEYS:
            return "OS_KEYS";
        case KEY_CLEAR_REQUEST_POWERVM_SYSKEY:
            return "POWERVM_SYSKEY";
        case KEY_CLEAR_REQUEST_RESERVED_1:
            return "RESERVED_1";
        case KEY_CLEAR_REQUEST_MFG_ALL:
            return "MFG_ALL";
        case KEY_CLEAR_REQUEST_MFG:
            return "MFG";
        case KEY_CLEAR_REQUEST_RESERVED_2:
            return "RESERVED_2";
        case KEY_CLEAR_REQUEST_INVALID:
            return "INVALID";
        default:
            return "Cannot decode KEY_CLEAR_REQUEST";
    }
}

//******************************************************************************
// attrToString<ATTR_KEY_TRANSITION_STATE>
//******************************************************************************

template<>
const char* attrToString<ATTR_KEY_TRANSITION_STATE> (
    AttributeTraits<ATTR_KEY_TRANSITION_STATE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case KEY_TRANSITION_STATE_KEY_TRANSITION_NOT_REQUESTED:
            return "KEY_TRANSITION_NOT_REQUESTED";
        case KEY_TRANSITION_STATE_KEY_TRANSITION_STARTED:
            return "KEY_TRANSITION_STARTED";
        case KEY_TRANSITION_STATE_KEY_TRANSITION_FAILED:
            return "KEY_TRANSITION_FAILED";
        case KEY_TRANSITION_STATE_KEY_TRANSITION_SUCCEEDED:
            return "KEY_TRANSITION_SUCCEEDED";
        case KEY_TRANSITION_STATE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode KEY_TRANSITION_STATE";
    }
}

//******************************************************************************
// attrToString<ATTR_MODEL>
//******************************************************************************

template<>
const char* attrToString<ATTR_MODEL> (
    AttributeTraits<ATTR_MODEL>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case MODEL_NA:
            return "NA";
        case MODEL_RESERVED:
            return "RESERVED";
        case MODEL_VENICE:
            return "VENICE";
        case MODEL_MURANO:
            return "MURANO";
        case MODEL_NAPLES:
            return "NAPLES";
        case MODEL_NIMBUS:
            return "NIMBUS";
        case MODEL_CUMULUS:
            return "CUMULUS";
        case MODEL_AXONE:
            return "AXONE";
        case MODEL_CENTAUR:
            return "CENTAUR";
        case MODEL_OCMB:
            return "OCMB";
        case MODEL_JEDEC:
            return "JEDEC";
        case MODEL_CDIMM:
            return "CDIMM";
        case MODEL_POWER8:
            return "POWER8";
        case MODEL_POWER9:
            return "POWER9";
        case MODEL_POWER10:
            return "POWER10";
        case MODEL_CECTPM:
            return "CECTPM";
        case MODEL_BMC:
            return "BMC";
        case MODEL_AST2500:
            return "AST2500";
        case MODEL_AST2600:
            return "AST2600";
        case MODEL_PCA9847:
            return "PCA9847";
        case MODEL_UCD9090:
            return "UCD9090";
        case MODEL_UCD90120A:
            return "UCD90120A";
        case MODEL_UCD90320:
            return "UCD90320";
        case MODEL_INVALID:
            return "INVALID";
        default:
            return "Cannot decode MODEL";
    }
}

//******************************************************************************
// attrToString<ATTR_OCMB_FW_STATE>
//******************************************************************************

template<>
const char* attrToString<ATTR_OCMB_FW_STATE> (
    AttributeTraits<ATTR_OCMB_FW_STATE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case OCMB_FW_STATE_UNKNOWN:
            return "UNKNOWN";
        case OCMB_FW_STATE_UP_TO_DATE:
            return "UP_TO_DATE";
        case OCMB_FW_STATE_OUT_OF_DATE:
            return "OUT_OF_DATE";
        case OCMB_FW_STATE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode OCMB_FW_STATE";
    }
}

//******************************************************************************
// attrToString<ATTR_PAYLOAD_KIND>
//******************************************************************************

template<>
const char* attrToString<ATTR_PAYLOAD_KIND> (
    AttributeTraits<ATTR_PAYLOAD_KIND>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case PAYLOAD_KIND_UNKNOWN:
            return "UNKNOWN";
        case PAYLOAD_KIND_PHYP:
            return "PHYP";
        case PAYLOAD_KIND_SAPPHIRE:
            return "SAPPHIRE";
        case PAYLOAD_KIND_NONE:
            return "NONE";
        case PAYLOAD_KIND_INVALID:
            return "INVALID";
        default:
            return "Cannot decode PAYLOAD_KIND";
    }
}

//******************************************************************************
// attrToString<ATTR_PROC_COMPATIBILITY_REQ>
//******************************************************************************

template<>
const char* attrToString<ATTR_PROC_COMPATIBILITY_REQ> (
    AttributeTraits<ATTR_PROC_COMPATIBILITY_REQ>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case PROC_COMPATIBILITY_REQ_ALLOW_COMPATIBILITY:
            return "ALLOW_COMPATIBILITY";
        case PROC_COMPATIBILITY_REQ_FORCED_COMPATIBILITY:
            return "FORCED_COMPATIBILITY";
        case PROC_COMPATIBILITY_REQ_FORCED_NATIVE:
            return "FORCED_NATIVE";
        case PROC_COMPATIBILITY_REQ_INVALID:
            return "INVALID";
        default:
            return "Cannot decode PROC_COMPATIBILITY_REQ";
    }
}

//******************************************************************************
// attrToString<ATTR_PROC_MODULE_TYPE>
//******************************************************************************

template<>
const char* attrToString<ATTR_PROC_MODULE_TYPE> (
    AttributeTraits<ATTR_PROC_MODULE_TYPE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case PROC_MODULE_TYPE_GODEL:
            return "GODEL";
        case PROC_MODULE_TYPE_BLAISE:
            return "BLAISE";
        case PROC_MODULE_TYPE_P11_GODEL:
            return "P11_GODEL";
        case PROC_MODULE_TYPE_P11_BLAISE:
            return "P11_BLAISE";
        case PROC_MODULE_TYPE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode PROC_MODULE_TYPE";
    }
}

//******************************************************************************
// attrToString<ATTR_RISK_LEVEL_ORIGIN>
//******************************************************************************

template<>
const char* attrToString<ATTR_RISK_LEVEL_ORIGIN> (
    AttributeTraits<ATTR_RISK_LEVEL_ORIGIN>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case RISK_LEVEL_ORIGIN_USER:
            return "USER";
        case RISK_LEVEL_ORIGIN_MRW:
            return "MRW";
        case RISK_LEVEL_ORIGIN_INVALID:
            return "INVALID";
        default:
            return "Cannot decode RISK_LEVEL_ORIGIN";
    }
}

//******************************************************************************
// attrToString<ATTR_TYPE>
//******************************************************************************

template<>
const char* attrToString<ATTR_TYPE> (
    AttributeTraits<ATTR_TYPE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case TYPE_NA:
            return "NA";
        case TYPE_SYS:
            return "SYS";
        case TYPE_NODE:
            return "NODE";
        case TYPE_DIMM:
            return "DIMM";
        case TYPE_MEMBUF:
            return "MEMBUF";
        case TYPE_PROC:
            return "PROC";
        case TYPE_EX:
            return "EX";
        case TYPE_CORE:
            return "CORE";
        case TYPE_L2:
            return "L2";
        case TYPE_L3:
            return "L3";
        case TYPE_L4:
            return "L4";
        case TYPE_MCS:
            return "MCS";
        case TYPE_MBA:
            return "MBA";
        case TYPE_XBUS:
            return "XBUS";
        case TYPE_ABUS:
            return "ABUS";
        case TYPE_PCI:
            return "PCI";
        case TYPE_DPSS:
            return "DPSS";
        case TYPE_APSS:
            return "APSS";
        case TYPE_OCC:
            return "OCC";
        case TYPE_PSI:
            return "PSI";
        case TYPE_FSP:
            return "FSP";
        case TYPE_PNOR:
            return "PNOR";
        case TYPE_OSC:
            return "OSC";
        case TYPE_TODCLK:
            return "TODCLK";
        case TYPE_CONTROL_NODE:
            return "CONTROL_NODE";
        case TYPE_OSCREFCLK:
            return "OSCREFCLK";
        case TYPE_OSCPCICLK:
            return "OSCPCICLK";
        case TYPE_REFCLKENDPT:
            return "REFCLKENDPT";
        case TYPE_PCICLKENDPT:
            return "PCICLKENDPT";
        case TYPE_NX:
            return "NX";
        case TYPE_PORE:
            return "PORE";
        case TYPE_PCIESWITCH:
            return "PCIESWITCH";
        case TYPE_CAPP:
            return "CAPP";
        case TYPE_FSI:
            return "FSI";
        case TYPE_EQ:
            return "EQ";
        case TYPE_MCA:
            return "MCA";
        case TYPE_MCBIST:
            return "MCBIST";
        case TYPE_MI:
            return "MI";
        case TYPE_DMI:
            return "DMI";
        case TYPE_OBUS:
            return "OBUS";
        case TYPE_SBE:
            return "SBE";
        case TYPE_PPE:
            return "PPE";
        case TYPE_PERV:
            return "PERV";
        case TYPE_PEC:
            return "PEC";
        case TYPE_PHB:
            return "PHB";
        case TYPE_SYSREFCLKENDPT:
            return "SYSREFCLKENDPT";
        case TYPE_MFREFCLKENDPT:
            return "MFREFCLKENDPT";
        case TYPE_TPM:
            return "TPM";
        case TYPE_SP:
            return "SP";
        case TYPE_UART:
            return "UART";
        case TYPE_PS:
            return "PS";
        case TYPE_FAN:
            return "FAN";
        case TYPE_VRM:
            return "VRM";
        case TYPE_USB:
            return "USB";
        case TYPE_ETH:
            return "ETH";
        case TYPE_PANEL:
            return "PANEL";
        case TYPE_BMC:
            return "BMC";
        case TYPE_FLASH:
            return "FLASH";
        case TYPE_SEEPROM:
            return "SEEPROM";
        case TYPE_TMP:
            return "TMP";
        case TYPE_GPIO_EXPANDER:
            return "GPIO_EXPANDER";
        case TYPE_POWER_SEQUENCER:
            return "POWER_SEQUENCER";
        case TYPE_RTC:
            return "RTC";
        case TYPE_FANCTLR:
            return "FANCTLR";
        case TYPE_OBUS_BRICK:
            return "OBUS_BRICK";
        case TYPE_NPU:
            return "NPU";
        case TYPE_MC:
            return "MC";
        case TYPE_TEST_FAIL:
            return "TEST_FAIL";
        case TYPE_MFREFCLK:
            return "MFREFCLK";
        case TYPE_SMPGROUP:
            return "SMPGROUP";
        case TYPE_OMI:
            return "OMI";
        case TYPE_MCC:
            return "MCC";
        case TYPE_OMIC:
            return "OMIC";
        case TYPE_OCMB_CHIP:
            return "OCMB_CHIP";
        case TYPE_MEM_PORT:
            return "MEM_PORT";
        case TYPE_I2C_MUX:
            return "I2C_MUX";
        case TYPE_PMIC:
            return "PMIC";
        case TYPE_NMMU:
            return "NMMU";
        case TYPE_PAU:
            return "PAU";
        case TYPE_IOHS:
            return "IOHS";
        case TYPE_PAUC:
            return "PAUC";
        case TYPE_FC:
            return "FC";
        case TYPE_LPCREFCLKENDPT:
            return "LPCREFCLKENDPT";
        case TYPE_GENERIC_I2C_DEVICE:
            return "GENERIC_I2C_DEVICE";
        case TYPE_MDS_CTLR:
            return "MDS_CTLR";
        case TYPE_DCM:
            return "DCM";
        case TYPE_POWER_IC:
            return "POWER_IC";
        case TYPE_TEMP_SENSOR:
            return "TEMP_SENSOR";
        case TYPE_LAST_IN_RANGE:
            return "LAST_IN_RANGE";
        default:
            return "Cannot decode TYPE";
    }
}

//******************************************************************************
// attrToString<ATTR_SBE_STATE>
//******************************************************************************

template<>
const char* attrToString<ATTR_SBE_STATE> (
    AttributeTraits<ATTR_SBE_STATE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case SBE_STATE_NOT_USABLE:
            return "NOT_USABLE";
        case SBE_STATE_BOOTED:
            return "BOOTED";
        case SBE_STATE_CHECK_CFAM:
            return "CHECK_CFAM";
        case SBE_STATE_DEBUG_MODE:
            return "DEBUG_MODE";
        case SBE_STATE_FAILED:
            return "FAILED";
        case SBE_STATE_UNKNOWN:
            return "UNKNOWN";
        case SBE_STATE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode SBE_STATE";
    }
}

//******************************************************************************
// attrToString<ATTR_PAYLOAD_STATE>
//******************************************************************************

template<>
const char* attrToString<ATTR_PAYLOAD_STATE> (
    AttributeTraits<ATTR_PAYLOAD_STATE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case PAYLOAD_STATE_NOT_LOADED:
            return "NOT_LOADED";
        case PAYLOAD_STATE_RUNNING:
            return "RUNNING";
        case PAYLOAD_STATE_STOPPED:
            return "STOPPED";
        case PAYLOAD_STATE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode PAYLOAD_STATE";
    }
}

//******************************************************************************
// attrToString<ATTR_PSI_LINK_STATE>
//******************************************************************************

template<>
const char* attrToString<ATTR_PSI_LINK_STATE> (
    AttributeTraits<ATTR_PSI_LINK_STATE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case PSI_LINK_STATE_NOT_ACTIVE:
            return "NOT_ACTIVE";
        case PSI_LINK_STATE_ACTIVE:
            return "ACTIVE";
        case PSI_LINK_STATE_CANDIDATE:
            return "CANDIDATE";
        case PSI_LINK_STATE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode PSI_LINK_STATE";
    }
}

//******************************************************************************
// attrToString<ATTR_FMBX_DMA_STATE>
//******************************************************************************

template<>
const char* attrToString<ATTR_FMBX_DMA_STATE> (
    AttributeTraits<ATTR_FMBX_DMA_STATE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case FMBX_DMA_STATE_REJECT_DMA:
            return "REJECT_DMA";
        case FMBX_DMA_STATE_DMA_VIA_FSI:
            return "DMA_VIA_FSI";
        case FMBX_DMA_STATE_DMA_VIA_PSI:
            return "DMA_VIA_PSI";
        case FMBX_DMA_STATE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode FMBX_DMA_STATE";
    }
}

//******************************************************************************
// attrToString<ATTR_PNOR_PARTITION_SIDE>
//******************************************************************************

template<>
const char* attrToString<ATTR_PNOR_PARTITION_SIDE> (
    AttributeTraits<ATTR_PNOR_PARTITION_SIDE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case PNOR_PARTITION_SIDE_SIDEA:
            return "SIDEA";
        case PNOR_PARTITION_SIDE_SIDEB:
            return "SIDEB";
        case PNOR_PARTITION_SIDE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode PNOR_PARTITION_SIDE";
    }
}

//******************************************************************************
// attrToString<ATTR_SPL_WAKEUP_STATE>
//******************************************************************************

template<>
const char* attrToString<ATTR_SPL_WAKEUP_STATE> (
    AttributeTraits<ATTR_SPL_WAKEUP_STATE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case SPL_WAKEUP_STATE_DISABLE:
            return "DISABLE";
        case SPL_WAKEUP_STATE_ENABLE:
            return "ENABLE";
        case SPL_WAKEUP_STATE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode SPL_WAKEUP_STATE";
    }
}

//******************************************************************************
// attrToString<ATTR_SPD_DRAM_DIMM_DEVICE_TYPE>
//******************************************************************************

template<>
const char* attrToString<ATTR_SPD_DRAM_DIMM_DEVICE_TYPE> (
    AttributeTraits<ATTR_SPD_DRAM_DIMM_DEVICE_TYPE>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case SPD_DRAM_DIMM_DEVICE_TYPE_NONE:
            return "NONE";
        case SPD_DRAM_DIMM_DEVICE_TYPE_DDR3:
            return "DDR3";
        case SPD_DRAM_DIMM_DEVICE_TYPE_DDR4:
            return "DDR4";
        case SPD_DRAM_DIMM_DEVICE_TYPE_DDR5:
            return "DDR5";
        case SPD_DRAM_DIMM_DEVICE_TYPE_INVALID:
            return "INVALID";
        default:
            return "Cannot decode SPD_DRAM_DIMM_DEVICE_TYPE";
    }
}

//******************************************************************************
// attrToString<ATTR_PRIMARY_MF_CLOCK>
//******************************************************************************

template<>
const char* attrToString<ATTR_PRIMARY_MF_CLOCK> (
    AttributeTraits<ATTR_PRIMARY_MF_CLOCK>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case PRIMARY_MF_CLOCK_BOTH_SRC0:
            return "BOTH_SRC0";
        case PRIMARY_MF_CLOCK_BOTH_SRC1:
            return "BOTH_SRC1";
        case PRIMARY_MF_CLOCK_SRC0:
            return "SRC0";
        case PRIMARY_MF_CLOCK_SRC1:
            return "SRC1";
        case PRIMARY_MF_CLOCK_SRC_NONE:
            return "SRC_NONE";
        case PRIMARY_MF_CLOCK_INVALID:
            return "INVALID";
        default:
            return "Cannot decode PRIMARY_MF_CLOCK";
    }
}

//******************************************************************************
// attrToString<ATTR_REDUNDANT_MF_CLOCKS>
//******************************************************************************

template<>
const char* attrToString<ATTR_REDUNDANT_MF_CLOCKS> (
    AttributeTraits<ATTR_REDUNDANT_MF_CLOCKS>::Type const& i_attrValue)
{
    switch(i_attrValue)
    {
        case REDUNDANT_MF_CLOCKS_TRUE:
            return "TRUE";
        case REDUNDANT_MF_CLOCKS_FALSE:
            return "FALSE";
        case REDUNDANT_MF_CLOCKS_INVALID:
            return "INVALID";
        default:
            return "Cannot decode REDUNDANT_MF_CLOCKS";
    }
}

} // End namespace TARGETING

