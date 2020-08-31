#include "stats.h"
#include <bits/stdc++.h>
namespace Statistics {
    
    Stats ComputeStatistics(const std::vector<float>& floatVector) {
        //Implement statistics here
        Stats statsObj;
        auto size_floatVector = floatVector.size();
        /*if(size_floatVector == 0)
        {
            statsObj.average = 0;
            statsObj.max = 0;
            statsObj.min = 0;
            return statsObj;
        }*/
        statsObj.average = accumulate( floatVector.begin(), floatVector.end(), 0.0) / size_floatVector;
        statsObj.max = *max_element(floatVector.begin(), floatVector.end());
        statsObj.min = *min_element(floatVector.begin(), floatVector.end());
        return statsObj;
    }
}
