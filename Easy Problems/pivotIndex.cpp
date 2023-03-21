#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int leftSum;
        int rightSum;

        for (int i = 0; i < nums.size(); ++i)
        {
            leftSum = 0;
            rightSum = 0;
            for (int j = 0; j < nums.size(); ++j)
            {
                if (i == 0)
                {
                    leftSum = 0;
                    rightSum += 
                }
                if (i == nums.size() - 1)
                {
                    rightSum = 0;
                }

            }
        }
    }
};