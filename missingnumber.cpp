#include <vector>
#include <iostream>
using namespace std;

class Solution {
    public:
        
        int missingNumber(vector<int>& nums) {
        
            for (int i = 0; i <= nums.size(); i++) {
                bool flag = false;  
                
                
                cout << flag;
                
                
                for (int j = 0; j < nums.size(); j++) {
                    if (i == nums[j]) {
                        flag = true;  
                    }
                }
                
                if (flag == false) {
                    return i;
                }
            }
            
            return -1;
        }
};


/*

#include <vector>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum = 0;
        
        int n = nums.size();
        
        int totalSum = n * (n + 1) / 2;
        
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
        }
        
       
        return totalSum - sum;
    }
};



*/