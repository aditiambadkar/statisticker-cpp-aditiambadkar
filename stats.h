#include <vector>

namespace Statistics {
    
    class Stats {
        private:
            float average;
            float max;
            float min;
    };   
    Stats ComputeStatistics(const std::vector<float>& );

}
