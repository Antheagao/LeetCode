#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) 
    {
        vector<int> sum;
        int adder;

        sum.push_back(nums[0]);

        for (int i = 1; i < nums.size(); ++i)
        { 
            adder = nums[i] + sum[i-1];
            sum.push_back(adder);
        }

        return sum;
    }
};

