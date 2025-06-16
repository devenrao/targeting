#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <errl/errludtarget.H>
#include <errl/errlreasoncodes.H>
#include <targeting/common/target.H>
#include <targeting/common/targetservice.H>
#include <targeting/common/trace.H>

namespace ERRORLOG
{
using namespace TARGETING;
extern TARG_TD_t g_trac_errl;
//------------------------------------------------------------------------------
ErrlUserDetailsTarget::ErrlUserDetailsTarget(
    const Target * i_pTarget,
    const char* i_label)
{
    // Set up ErrlUserDetails instance variables
    iv_CompId = ERRL_COMP_ID;
    iv_Version = 1;
    iv_SubSection = ERRL_UDT_TARGET;
    // override the default of false
    iv_merge = true;

    uint8_t* label_buf = NULL;

    if (i_pTarget == TARGETING::MASTER_PROCESSOR_CHIP_TARGET_SENTINEL) {
        label_buf = reallocUsrBuf(sizeof(uint32_t)
                                +sizeof(TargetLabel_t));
        uint32_t *pBuffer = reinterpret_cast<uint32_t*>
          (label_buf+sizeof(TargetLabel_t));
        // copy 0xFFFFFFFF to indicate MASTER just as gethuid() does
        *pBuffer = 0xFFFFFFFF;
    } else {
        uint32_t bufSize = 0;
        uint8_t *pTargetString = i_pTarget->targetFFDC(bufSize);
        label_buf = reallocUsrBuf(bufSize+sizeof(TargetLabel_t));
        uint8_t* pBuffer = (label_buf+sizeof(TargetLabel_t));
        memcpy(pBuffer, pTargetString, bufSize);
        free (pTargetString);
    }

    // Prepend a label
    TargetLabel_t label;
    if( i_label )
    {
        strcpy( label.x, i_label );
    }
    else // no label, put a generic one in there
    {
        strcpy( label.x, "Target" );
    }
    memcpy( label_buf, &label, sizeof(label) );
}


//------------------------------------------------------------------------------
ErrlUserDetailsTarget::~ErrlUserDetailsTarget()
{ }
} // namespace
