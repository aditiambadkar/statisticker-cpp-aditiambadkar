#include "stats.h"
class Stats
{
    private:
    float average;
    float max;
    float min;
};

Stats Statistics::ComputeStatistics(const std::vector<___>& v) {
    //Implement statistics here
    Stats obj;
    auto n = v.size();
    obj.average = accumulate( v.begin(), v.end(), 0.0) / n;
    obj.max = *max_element(v.begin(), v.end());
    obj.min = *min_element(v.begin(), v.end());
    return obj;
}
