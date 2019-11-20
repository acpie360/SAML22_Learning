#include <xc.h>
#include "definitions.h"                // SYS function prototypes

/* LED: PC27 */
#define LED_MASK    (1 << 27)

void MyLedTest(void)
{    
    PORT_GroupOutputEnable(PORT_GROUP_2, LED_MASK);
    PORT_GroupToggle(PORT_GROUP_2, LED_MASK);
    
    SYSTICK_DelayMs(500);
}