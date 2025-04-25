#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        for (int i = 1; i <= nums.size(); i++) {
            bool flag = false;

            for (int j = 0; j < nums.size(); j++) {
                if (i == nums[j]) {
                    flag = true; 
                    break;
                }
            }

            if (!flag) {
                ans.push_back(i);
            }
        }

        return ans;
    }
};


/*
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    int binarySearch(const vector<int>& arr, int l, int r, int key) {
        if (l >= r) return l;  
        int mid = (l + r) / 2;
        if (arr[mid] < key)
            return binarySearch(arr, mid + 1, r, key);  
        else
            return binarySearch(arr, l, mid, key);  
    }

    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end()); 

        vector<int> res;

        for (int i = 0; i < nums.size(); i++) {
            int cnt = binarySearch(sorted, 0, sorted.size(), nums[i]);
            res.push_back(cnt);
        }

        return res;
    }
};

*/