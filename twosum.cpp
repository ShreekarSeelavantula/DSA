#include <vector>
using namespace std;
class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for (int i = 0; i < nums.size(); i++) {
                for (int j = i + 1; j < nums.size(); j++) {
                    if ((nums[i] + nums[j]) == target) {
                        vector<int> arr = {i, j};
                        return arr;
                    }
                }
            }
            return {};
        }
};


/*

#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> s;
        
        for (int i = 0; i < nums.size(); i++) {
            if (s.find(target - nums[i]) != s.end()) {
               
                return {s[target - nums[i]], i};
            }
            s[nums[i]] = i;
        }
        
        return {};
    }
};

*/