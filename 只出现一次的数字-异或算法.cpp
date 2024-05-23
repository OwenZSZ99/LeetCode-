#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 0 || nums.empty())return -1;
        int first = 0;

        for (int i = 0; i < nums.size();i++) {
            first = first ^ nums[i];
        }

        return first;
    }
};