#include "stats.h"
#include "stdio.h"
#include <math.h>
#include "alerts.h"


void emailAlerter (float Threshold , struct Stats computedStats)
{
  if(computedStats.max > Treshold)
  {
    emailAlertCallCount=1;
  }
}

void ledAlert(float Threshold, struct SttascomputedStats)
{
  if(computedStats.max > Treshold)
  {
    ledAlertCallCount=1;
  }
}
 
