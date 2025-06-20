
#ifndef ERRL_UDTARGET_H
#define ERRL_UDTARGET_H

#include <string.h>

namespace ERRORLOG
{
typedef struct TargetLabel_t
{
    static const uint32_t LABEL_TAG = 0xEEEEEEEE;
    uint32_t tag;
    char x[24]; //space to left of divider
    TargetLabel_t() : tag(0xEEEEEEEE)
    {
        memset(x,'\0',sizeof(x));
    };
} TargetLabel_t;
}
#if !defined(PARSER) && !defined(LOGPARSER)

#include <errl/errluserdetails.H>

namespace TARGETING // Forward reference
{ class Target; }

namespace ERRORLOG
{
class ErrlUserDetailsTarget : public ErrlUserDetails {
public:

    ErrlUserDetailsTarget(const TARGETING::Target * i_pTarget,
                          const char* i_label = NULL);
    virtual ~ErrlUserDetailsTarget();

private:

    // Disabled
    ErrlUserDetailsTarget(const ErrlUserDetailsTarget &);
    ErrlUserDetailsTarget & operator=(const ErrlUserDetailsTarget &);
};
}
#else // if LOGPARSER defined

#include "errluserdetails.H"
#include <string.h>

namespace ERRORLOG
{
  static uint8_t *errlud_parse_entity_path(uint8_t *i_ptr, char *o_ptr)
  {
      uint8_t *l_ptr = i_ptr;
      // from targeting/common/entitypath.[CH]
      // entityPath is PATH_TYPE:4, NumberOfElements:4,
      //          [Element, Instance#]
      // PATH_TYPE
      const char *pathString;
      const uint8_t pathTypeLength = *l_ptr;
      l_ptr++;
      const uint8_t pathType = (pathTypeLength & 0xF0) >> 4;
      switch (pathType) {
          case 0x01: pathString = "Logical:"; break;
          case 0x02: pathString = "Physical:"; break;
          case 0x03: pathString = "Device:"; break;
          case 0x04: pathString = "Power:"; break;
          default:   pathString = "Unknown:"; break;
      }
      uint32_t dataSize = sprintf(o_ptr, "%s",pathString);
      const uint8_t pathSize = (pathTypeLength & 0x0F) * 2;
      uint8_t *lElementInstance = l_ptr;
      l_ptr += pathSize * sizeof(uint8_t);
      for (uint32_t j=0;j<pathSize;j += 2) {
          switch (lElementInstance[j]) {
              case 0x00: { pathString = "/NA"; break; }
              case 0x01: { pathString = "/Sys"; break; }
              case 0x02: { pathString = "/Node"; break; }
              case 0x03: { pathString = "/DIMM"; break; }
              case 0x04: { pathString = "/Membuf"; break; }
              case 0x05: { pathString = "/Proc"; break; }
              case 0x06: { pathString = "/EX"; break; }
              case 0x07: { pathString = "/Core"; break; }
              case 0x08: { pathString = "/L2"; break; }
              case 0x09: { pathString = "/L3"; break; }
              case 0x0A: { pathString = "/L4"; break; }
              case 0x0B: { pathString = "/MCS"; break; }
              case 0x0D: { pathString = "/MBA"; break; }
              case 0x0E: { pathString = "/XBUS"; break; }
              case 0x0F: { pathString = "/ABUS"; break; }
              case 0x10: { pathString = "/PCI"; break; }
              case 0x11: { pathString = "/DPSS"; break; }
              case 0x12: { pathString = "/APSS"; break; }
              case 0x13: { pathString = "/OCC"; break; }
              case 0x14: { pathString = "/PSI"; break; }
              case 0x15: { pathString = "/FSP"; break; }
              case 0x16: { pathString = "/PNOR"; break; }
              case 0x17: { pathString = "/OSC"; break; }
              case 0x18: { pathString = "/TODCLK"; break; }
              case 0x19: { pathString = "/CONTROL_NODE"; break; }
              case 0x1A: { pathString = "/OSCREFCLK"; break; }
              case 0x1B: { pathString = "/OSCPCICLK"; break; }
              case 0x1C: { pathString = "/REFCLKENDPT"; break; }
              case 0x1D: { pathString = "/PCICLKENDPT"; break; }
              case 0x1E: { pathString = "/NX"; break; }
              case 0x1F: { pathString = "/PORE"; break; }
              case 0x20: { pathString = "/PCIESWITCH"; break; }
              case 0x21: { pathString = "/CAPP"; break; }
              case 0x22: { pathString = "/FSI"; break; }
              case 0x23: { pathString = "/EQ"; break; }
              case 0x24: { pathString = "/MCA"; break; }
              case 0x25: { pathString = "/MCBIST"; break; }
              case 0x26: { pathString = "/MI"; break; }
              case 0x27: { pathString = "/DMI"; break; }
              case 0x28: { pathString = "/OBUS"; break; }
              case 0x2A: { pathString = "/SBE"; break; }
              case 0x2B: { pathString = "/PPE"; break; }
              case 0x2C: { pathString = "/PERV"; break; }
              case 0x2D: { pathString = "/PEC"; break; }
              case 0x2E: { pathString = "/PHB"; break; }
              case 0x2F: { pathString = "/SYSREFCLKENDPT"; break; }
              case 0x30: { pathString = "/MFREFCLKENDPT"; break; }
              case 0x31: { pathString = "/TPM"; break; }
              case 0x32: { pathString = "/SP"; break; }
              case 0x33: { pathString = "/UART"; break; }
              case 0x34: { pathString = "/PS"; break; }
              case 0x35: { pathString = "/FAN"; break; }
              case 0x36: { pathString = "/VRM"; break; }
              case 0x37: { pathString = "/USB"; break; }
              case 0x38: { pathString = "/ETH"; break; }
              case 0x39: { pathString = "/PANEL"; break; }
              case 0x3A: { pathString = "/BMC"; break; }
              case 0x3B: { pathString = "/FLASH"; break; }
              case 0x3C: { pathString = "/SEEPROM"; break; }
              case 0x3D: { pathString = "/TMP"; break; }
              case 0x3E: { pathString = "/GPIO_EXPANDER"; break; }
              case 0x3F: { pathString = "/POWER_SEQUENCER"; break; }
              case 0x40: { pathString = "/RTC"; break; }
              case 0x41: { pathString = "/FANCTLR"; break; }
              case 0x42: { pathString = "/OBUS_BRICK"; break; }
              case 0x43: { pathString = "/NPU"; break; }
              case 0x44: { pathString = "/MC"; break; }
              case 0x45: { pathString = "/TEST_FAIL"; break; }
              case 0x46: { pathString = "/MFREFCLK"; break; }
              case 0x47: { pathString = "/SMPGROUP"; break; }
              case 0x48: { pathString = "/OMI"; break; }
              case 0x49: { pathString = "/MCC"; break; }
              case 0x4A: { pathString = "/OMIC"; break; }
              case 0x4B: { pathString = "/OCMB_CHIP"; break; }
              case 0x4C: { pathString = "/MEM_PORT"; break; }
              case 0x4D: { pathString = "/I2C_MUX"; break; }
              case 0x4E: { pathString = "/PMIC"; break; }
              case 0x4F: { pathString = "/NMMU"; break; }
              case 0x50: { pathString = "/PAU"; break; }
              case 0x51: { pathString = "/IOHS"; break; }
              case 0x52: { pathString = "/PAUC"; break; }
              case 0x53: { pathString = "/FC"; break; }
              case 0x54: { pathString = "/LPCREFCLKENDPT"; break; }
              case 0x55: { pathString = "/GENERIC_I2C_DEVICE"; break; }
              case 0x56: { pathString = "/MDS_CTLR"; break; }
              case 0x57: { pathString = "/DCM"; break; }
              case 0x66: { pathString = "/POWER_IC"; break; }
              case 0x67: { pathString = "/TEMP_SENSOR"; break; }
              case 0x68: { pathString = "/LAST_IN_RANGE"; break; }
              default:   { pathString = "/UKNOWN"; break; }
          } // switch
          // copy next part in, overwritting previous terminator
          dataSize += sprintf(o_ptr + dataSize,
                              "%s%d", pathString,
                              lElementInstance[j+1]);
      } // for
      return l_ptr;
} // errlud_parse_entity_path 
class ErrlUserDetailsParserTarget : public ErrlUserDetailsParser {
public:

    ErrlUserDetailsParserTarget() {}

    virtual ~ErrlUserDetailsParserTarget() {}
/**
 *  @brief Parses Target user detail data from an error log
 *  @param  i_version Version of the data
 *  @param  i_parse   ErrlUsrParser object for outputting information
 *  @param  i_pBuffer Pointer to buffer containing detail data
 *  @param  i_buflen  Length of the buffer
 */
  virtual void parse(errlver_t i_version,
                        ErrlUsrParser & i_parser,
                        void * i_pBuffer,
                        const uint32_t i_buflen) const
  {
    const char *attrData;
    char l_label[24];
    sprintf(l_label,"Target");
    uint32_t *l_ptr32 = reinterpret_cast<uint32_t *>(i_pBuffer);
    // while there is still at least 1 word of data left
    for (; (l_ptr32 + 1) <= (uint32_t *)((uint8_t*)i_pBuffer + i_buflen); )
    {
      if (*l_ptr32 == 0xFFFFFFFF) { // special - master
        i_parser.PrintString("Target", "MASTER_PROCESSOR_CHIP_TARGET_SENTINEL");
        l_ptr32++; // past the marker
      } else if (*l_ptr32 == TargetLabel_t::LABEL_TAG) {
        TargetLabel_t* tmp_label = reinterpret_cast<TargetLabel_t*>(l_ptr32);
        memcpy( l_label, tmp_label->x, sizeof(l_label)-1 );
        l_ptr32 += (sizeof(TargetLabel_t)/sizeof(uint32_t));
      } else { 
        // first 4 are always the same
        if ((l_ptr32 + 4) <= (uint32_t *)((uint8_t*)i_pBuffer + i_buflen)) {
            i_parser.PrintNumber( l_label, "HUID = 0x%08X", ntohl(UINT32_FROM_PTR(l_ptr32)) );
            l_ptr32++;
            switch (ntohl(UINT32_FROM_PTR(l_ptr32))) { // CLASS
                case 0x00: { attrData = "CLASS_NA"; break; }
                case 0x01: { attrData = "CLASS_CARD"; break; }
                case 0x02: { attrData = "CLASS_ENC"; break; }
                case 0x03: { attrData = "CLASS_CHIP"; break; }
                case 0x04: { attrData = "CLASS_UNIT"; break; }
                case 0x05: { attrData = "CLASS_DEV"; break; }
                case 0x06: { attrData = "CLASS_SYS"; break; }
                case 0x07: { attrData = "CLASS_LOGICAL_CARD"; break; }
                case 0x08: { attrData = "CLASS_BATTERY"; break; }
                case 0x09: { attrData = "CLASS_LED"; break; }
                case 0x0A: { attrData = "CLASS_SP"; break; }
                case 0x0B: { attrData = "CLASS_ASIC"; break; }
                case 0x0C: { attrData = "CLASS_MAX"; break; }
                default:   { attrData = "UNKNOWN_CLASS"; break; }
            } // switch
            i_parser.PrintString("  ATTR_CLASS", attrData);
            l_ptr32++;
            switch (ntohl(UINT32_FROM_PTR(l_ptr32))) { // TYPE
                case 0x00: { attrData = "TYPE_NA"; break; }
                case 0x01: { attrData = "TYPE_SYS"; break; }
                case 0x02: { attrData = "TYPE_NODE"; break; }
                case 0x03: { attrData = "TYPE_DIMM"; break; }
                case 0x04: { attrData = "TYPE_MEMBUF"; break; }
                case 0x05: { attrData = "TYPE_PROC"; break; }
                case 0x06: { attrData = "TYPE_EX"; break; }
                case 0x07: { attrData = "TYPE_CORE"; break; }
                case 0x08: { attrData = "TYPE_L2"; break; }
                case 0x09: { attrData = "TYPE_L3"; break; }
                case 0x0A: { attrData = "TYPE_L4"; break; }
                case 0x0B: { attrData = "TYPE_MCS"; break; }
                case 0x0D: { attrData = "TYPE_MBA"; break; }
                case 0x0E: { attrData = "TYPE_XBUS"; break; }
                case 0x0F: { attrData = "TYPE_ABUS"; break; }
                case 0x10: { attrData = "TYPE_PCI"; break; }
                case 0x11: { attrData = "TYPE_DPSS"; break; }
                case 0x12: { attrData = "TYPE_APSS"; break; }
                case 0x13: { attrData = "TYPE_OCC"; break; }
                case 0x14: { attrData = "TYPE_PSI"; break; }
                case 0x15: { attrData = "TYPE_FSP"; break; }
                case 0x16: { attrData = "TYPE_PNOR"; break; }
                case 0x17: { attrData = "TYPE_OSC"; break; }
                case 0x18: { attrData = "TYPE_TODCLK"; break; }
                case 0x19: { attrData = "TYPE_CONTROL_NODE"; break; }
                case 0x1A: { attrData = "TYPE_OSCREFCLK"; break; }
                case 0x1B: { attrData = "TYPE_OSCPCICLK"; break; }
                case 0x1C: { attrData = "TYPE_REFCLKENDPT"; break; }
                case 0x1D: { attrData = "TYPE_PCICLKENDPT"; break; }
                case 0x1E: { attrData = "TYPE_NX"; break; }
                case 0x1F: { attrData = "TYPE_PORE"; break; }
                case 0x20: { attrData = "TYPE_PCIESWITCH"; break; }
                case 0x21: { attrData = "TYPE_CAPP"; break; }
                case 0x22: { attrData = "TYPE_FSI"; break; }
                case 0x23: { attrData = "TYPE_EQ"; break; }
                case 0x24: { attrData = "TYPE_MCA"; break; }
                case 0x25: { attrData = "TYPE_MCBIST"; break; }
                case 0x26: { attrData = "TYPE_MI"; break; }
                case 0x27: { attrData = "TYPE_DMI"; break; }
                case 0x28: { attrData = "TYPE_OBUS"; break; }
                case 0x2A: { attrData = "TYPE_SBE"; break; }
                case 0x2B: { attrData = "TYPE_PPE"; break; }
                case 0x2C: { attrData = "TYPE_PERV"; break; }
                case 0x2D: { attrData = "TYPE_PEC"; break; }
                case 0x2E: { attrData = "TYPE_PHB"; break; }
                case 0x2F: { attrData = "TYPE_SYSREFCLKENDPT"; break; }
                case 0x30: { attrData = "TYPE_MFREFCLKENDPT"; break; }
                case 0x31: { attrData = "TYPE_TPM"; break; }
                case 0x32: { attrData = "TYPE_SP"; break; }
                case 0x33: { attrData = "TYPE_UART"; break; }
                case 0x34: { attrData = "TYPE_PS"; break; }
                case 0x35: { attrData = "TYPE_FAN"; break; }
                case 0x36: { attrData = "TYPE_VRM"; break; }
                case 0x37: { attrData = "TYPE_USB"; break; }
                case 0x38: { attrData = "TYPE_ETH"; break; }
                case 0x39: { attrData = "TYPE_PANEL"; break; }
                case 0x3A: { attrData = "TYPE_BMC"; break; }
                case 0x3B: { attrData = "TYPE_FLASH"; break; }
                case 0x3C: { attrData = "TYPE_SEEPROM"; break; }
                case 0x3D: { attrData = "TYPE_TMP"; break; }
                case 0x3E: { attrData = "TYPE_GPIO_EXPANDER"; break; }
                case 0x3F: { attrData = "TYPE_POWER_SEQUENCER"; break; }
                case 0x40: { attrData = "TYPE_RTC"; break; }
                case 0x41: { attrData = "TYPE_FANCTLR"; break; }
                case 0x42: { attrData = "TYPE_OBUS_BRICK"; break; }
                case 0x43: { attrData = "TYPE_NPU"; break; }
                case 0x44: { attrData = "TYPE_MC"; break; }
                case 0x45: { attrData = "TYPE_TEST_FAIL"; break; }
                case 0x46: { attrData = "TYPE_MFREFCLK"; break; }
                case 0x47: { attrData = "TYPE_SMPGROUP"; break; }
                case 0x48: { attrData = "TYPE_OMI"; break; }
                case 0x49: { attrData = "TYPE_MCC"; break; }
                case 0x4A: { attrData = "TYPE_OMIC"; break; }
                case 0x4B: { attrData = "TYPE_OCMB_CHIP"; break; }
                case 0x4C: { attrData = "TYPE_MEM_PORT"; break; }
                case 0x4D: { attrData = "TYPE_I2C_MUX"; break; }
                case 0x4E: { attrData = "TYPE_PMIC"; break; }
                case 0x4F: { attrData = "TYPE_NMMU"; break; }
                case 0x50: { attrData = "TYPE_PAU"; break; }
                case 0x51: { attrData = "TYPE_IOHS"; break; }
                case 0x52: { attrData = "TYPE_PAUC"; break; }
                case 0x53: { attrData = "TYPE_FC"; break; }
                case 0x54: { attrData = "TYPE_LPCREFCLKENDPT"; break; }
                case 0x55: { attrData = "TYPE_GENERIC_I2C_DEVICE"; break; }
                case 0x56: { attrData = "TYPE_MDS_CTLR"; break; }
                case 0x57: { attrData = "TYPE_DCM"; break; }
                case 0x66: { attrData = "TYPE_POWER_IC"; break; }
                case 0x67: { attrData = "TYPE_TEMP_SENSOR"; break; }
                case 0x68: { attrData = "TYPE_LAST_IN_RANGE"; break; }
                default:   { attrData = "UNKNOWN_TYPE"; break; }
            } // switch
            i_parser.PrintString("  ATTR_TYPE", attrData);
            l_ptr32++;
            switch (ntohl(UINT32_FROM_PTR(l_ptr32))) { // MODEL
                case 0x00: { attrData = "MODEL_NA"; break; }
                case 0x10: { attrData = "MODEL_RESERVED"; break; }
                case 0x11: { attrData = "MODEL_VENICE"; break; }
                case 0x12: { attrData = "MODEL_MURANO"; break; }
                case 0x13: { attrData = "MODEL_NAPLES"; break; }
                case 0x14: { attrData = "MODEL_NIMBUS"; break; }
                case 0x15: { attrData = "MODEL_CUMULUS"; break; }
                case 0x16: { attrData = "MODEL_AXONE"; break; }
                case 0x30: { attrData = "MODEL_CENTAUR"; break; }
                case 0x31: { attrData = "MODEL_OCMB"; break; }
                case 0x50: { attrData = "MODEL_JEDEC"; break; }
                case 0x51: { attrData = "MODEL_CDIMM"; break; }
                case 0x70: { attrData = "MODEL_POWER8"; break; }
                case 0x90: { attrData = "MODEL_POWER9"; break; }
                case 0x91: { attrData = "MODEL_POWER10"; break; }
                case 0x92: { attrData = "MODEL_CECTPM"; break; }
                case 0x93: { attrData = "MODEL_BMC"; break; }
                case 0x94: { attrData = "MODEL_AST2500"; break; }
                case 0x95: { attrData = "MODEL_AST2600"; break; }
                case 0x96: { attrData = "MODEL_PCA9847"; break; }
                case 0x97: { attrData = "MODEL_UCD9090"; break; }
                case 0x98: { attrData = "MODEL_UCD90120A"; break; }
                case 0x99: { attrData = "MODEL_UCD90320"; break; }
                default:   { attrData = "UNKNOWN_MODEL"; break; }
            } // switch
            i_parser.PrintString("  ATTR_MODEL", attrData);
            l_ptr32++;
            // 2 Entity Paths next
            for (uint32_t k = 0;k < 2; k++)
            {
                uint32_t l_pathType = ntohl(UINT32_FROM_PTR(l_ptr32));
                if ((l_pathType == 0xf7abb7c) || // ATTR_PHYS_PATH
                    (l_pathType == 0xb5afcd7))   // ATTR_AFFINITY_PATH
                {
                    l_ptr32++;
                    uint8_t *l_ptr = reinterpret_cast<uint8_t *>(l_ptr32);
                    char outString[128];
                    l_ptr = errlud_parse_entity_path(l_ptr,outString);
                    if (l_pathType == 0xf7abb7c)
                    {
                      i_parser.PrintString("  ATTR_PHYS_PATH", outString);
                    }
                    if (l_pathType == 0xb5afcd7)
                    {
                      i_parser.PrintString("  ATTR_AFFINITY_PATH", outString);
                    } // else don't print anything
                    l_ptr32 = reinterpret_cast<uint32_t *>(l_ptr);
                } else {
                    l_ptr32++;
                }
            } // for
        } // if
      }
    } // for
  } // parse()

private:

// Disabled
ErrlUserDetailsParserTarget(const ErrlUserDetailsParserTarget &);
ErrlUserDetailsParserTarget & operator=(const ErrlUserDetailsParserTarget &);
};
} // namespace
#endif
#endif
