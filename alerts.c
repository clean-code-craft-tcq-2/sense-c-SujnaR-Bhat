#include "stats.h"
#include "stdio.h"
#include <math.h>
#include "alerts.h"


void emailAlerter (float Threshold , struct Stats computedStats)
{
  if(computedStats.max > Threshold)
  {
    emailAlertCallCount=1;
  }
}

void ledAlerter(float Threshold, struct Stats computedStats)
{
  if(computedStats.max > Threshold)
  {
    ledAlertCallCount=1;
  }
}
 
