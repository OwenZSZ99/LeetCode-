#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;


class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        if (nums.size == 0 || is_empty(nums))return 0;
        int maxNum = 0;
        int count = 0;
        for (int i = 0; i < nums.size();i++) {
            if (nums[i] == 1)count++;
            else
            {
                maxNum = maxNum > count ? maxNum : count;
            }
        }

        return max(maxNum, count);
    }
};