#include <attributeenums.H>
using namespace TARGETING;
EntityPath l_path;
const char * name = NULL;
const char * test_string = "Unknown path type";
size_t size = strlen( test_string );
name = l_path.pathElementTypeAsString( TYPE_NA );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_NA - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_SYS );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_SYS - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_NODE );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_NODE - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_DIMM );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_DIMM - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MEMBUF );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MEMBUF - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PROC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PROC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_EX );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_EX - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_CORE );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_CORE - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_L2 );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_L2 - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_L3 );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_L3 - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_L4 );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_L4 - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MCS );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MCS - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MBA );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MBA - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_XBUS );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_XBUS - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_ABUS );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_ABUS - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PCI );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PCI - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_DPSS );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_DPSS - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_APSS );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_APSS - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_OCC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_OCC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PSI );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PSI - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_FSP );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_FSP - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PNOR );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PNOR - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_OSC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_OSC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_TODCLK );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_TODCLK - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_CONTROL_NODE );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_CONTROL_NODE - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_OSCREFCLK );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_OSCREFCLK - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_OSCPCICLK );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_OSCPCICLK - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_REFCLKENDPT );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_REFCLKENDPT - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PCICLKENDPT );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PCICLKENDPT - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_NX );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_NX - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PORE );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PORE - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PCIESWITCH );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PCIESWITCH - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_CAPP );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_CAPP - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_FSI );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_FSI - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_EQ );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_EQ - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MCA );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MCA - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MCBIST );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MCBIST - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MI );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MI - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_DMI );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_DMI - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_OBUS );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_OBUS - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_SBE );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_SBE - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PPE );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PPE - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PERV );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PERV - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PEC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PEC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PHB );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PHB - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_SYSREFCLKENDPT );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_SYSREFCLKENDPT - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MFREFCLKENDPT );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MFREFCLKENDPT - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_TPM );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_TPM - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_SP );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_SP - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_UART );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_UART - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PS );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PS - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_FAN );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_FAN - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_VRM );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_VRM - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_USB );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_USB - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_ETH );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_ETH - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PANEL );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PANEL - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_BMC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_BMC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_FLASH );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_FLASH - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_SEEPROM );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_SEEPROM - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_TMP );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_TMP - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_GPIO_EXPANDER );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_GPIO_EXPANDER - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_POWER_SEQUENCER );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_POWER_SEQUENCER - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_RTC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_RTC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_FANCTLR );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_FANCTLR - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_OBUS_BRICK );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_OBUS_BRICK - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_NPU );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_NPU - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_TEST_FAIL );
size = strlen( name );
if( memcmp( name, test_string, size ))
{
TS_FAIL("type attribute TYPE_TEST_FAIL - did not return expected error message. - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MFREFCLK );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MFREFCLK - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_SMPGROUP );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_SMPGROUP - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_OMI );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_OMI - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MCC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MCC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_OMIC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_OMIC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_OCMB_CHIP );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_OCMB_CHIP - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MEM_PORT );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MEM_PORT - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_I2C_MUX );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_I2C_MUX - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PMIC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PMIC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_NMMU );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_NMMU - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PAU );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PAU - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_IOHS );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_IOHS - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_PAUC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_PAUC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_FC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_FC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_LPCREFCLKENDPT );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_LPCREFCLKENDPT - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_GENERIC_I2C_DEVICE );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_GENERIC_I2C_DEVICE - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_MDS_CTLR );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_MDS_CTLR - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_DCM );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_DCM - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_POWER_IC );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_POWER_IC - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_TEMP_SENSOR );
size = strlen( name );
if( !memcmp( name, test_string, size ))
{
TS_FAIL("undefined TYPE attribute TYPE_TEMP_SENSOR - update entitypath.C");
}
name = l_path.pathElementTypeAsString( TYPE_LAST_IN_RANGE );
size = strlen( name );
if( memcmp( name, test_string, size ))
{
TS_FAIL("type attribute TYPE_LAST_IN_RANGE - did not return expected error message. - update entitypath.C");
}
