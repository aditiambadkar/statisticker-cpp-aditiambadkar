#include "stats.h"
#include <bits/stdc++.h>
namespace Statistics {
    
    Stats ComputeStatistics(const std::vector<float>& floatVector) {
        //Implement statistics here
        Stats statsObj;
        auto size_floatVector = floatVector.size();
        if(size_floatVector == 0)
        {
            obj.average = 0;
            obj.max = 0;
            obj.min = 0;
            return obj;
        }
        obj.average = accumulate( floatVector.begin(), floatVector.end(), 0.0) / size_floatVector;
        obj.max = *max_element(floatVector.begin(), floatVector.end());
        obj.min = *min_element(floatVector.begin(), floatVector.end());
        return statsObj;
    }
}
