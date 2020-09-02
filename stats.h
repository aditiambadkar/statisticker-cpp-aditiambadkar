#include <vector>
#include <math.h>
namespace Statistics {
    
    struct Stats {
        float average;
        float max;
        float min;
    };   
    Stats statsObj = {NAN, NAN, NAN};
    Stats ComputeStatistics(const std::vector<float>& );
}
