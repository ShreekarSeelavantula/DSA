#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:

    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        
        
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] == nums[j]) {
                    return nums[i];  
                }
            }
        }
        
    
        return -1;  
       
    }
};



/*



#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // Phase 1: Detect cycle using Floyd’s Tortoise and Hare
        int s = nums[0], f = nums[0];
        while (true) {
            s = nums[s];           
            f = nums[nums[f]];     
            if (s == f) break;     
        }

        // Phase 2: Find the entrance to the cycle
        int temp = nums[0];
        while (s != temp) {
            s = nums[s];
            temp = nums[temp];
        }

        
        return temp;
    }
};
*/