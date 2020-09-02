#include "stats.h"
#include <bits/stdc++.h>
namespace Statistics {
    
    struct Stats statsObj = {NAN, NAN, NAN};
    
    Stats ComputeStatistics(const std::vector<float>& floatVector) {
        auto size_floatVector = floatVector.size();
        if(size_floatVector == 0)
        {
            statsObj.average = std::numeric_limits<float>::quiet_NaN();
            statsObj.max = std::numeric_limits<float>::quiet_NaN();
            statsObj.min = std::numeric_limits<float>::quiet_NaN();
            return statsObj;
        }
        statsObj.average = accumulate( floatVector.begin(), floatVector.end(), 0.0) / size_floatVector;
        statsObj.max = *max_element(floatVector.begin(), floatVector.end());
        statsObj.min = *min_element(floatVector.begin(), floatVector.end());
        return statsObj;
    }
}
