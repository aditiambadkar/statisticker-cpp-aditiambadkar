#include <vector>

namespace Statistics {
    
    struct Stats {
        public:
            float average;
            float max;
            float min;
    };   
    Stats ComputeStatistics(const std::vector<float>& );
}
