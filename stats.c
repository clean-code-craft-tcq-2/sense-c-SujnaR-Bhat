#include "stats.h"
#include "stdio.h"
#include <math.h>
int emailAlertCallCount=0;
int ledAlertCallCount =0;


struct Stats compute_statistics(const float *numberset, int setlength)
{
     Stats s;
    float total_sum =0;
    
    
    if(setlength! =0)
    {
        float max_value = numberset[0];
        float min_value = numberset[0];
        int i;
        for (i=0;i<setlength;i++)
        {
            total_sum += numberset[i];
            
            if(max_value < numberset[i])
            {
                max_value = numberset[i];
            }
            if(min_value>numberset[i])
            {
                min_value=  numberset[i];
            }
        }
        
        s.average = (float)total_sum/setlength ;
        s.min = min_value;
        s.max = max_value;
    }
    else
    {
        
     s.average = NAN;
     s.min = NAN;
     s.max = NAN;
    }
    
    return s;
}

void check_and_alert(float maxThreshold , alerter_funcptr alerters[],struct Stats computedStats)
{
    if(computedStats.max > maxThreshold)
    {
        alerters[0](maxThreshold,computedStats);
        alerters[1](maxThreshold,computedStats);
    }
}

