#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        set<int> ad;
        int setSum = 0;
        for (int i = 0; i < nums.size();i++) {
            ad.insert(nums[i]);
        }

        for (auto a : ad) {
            setSum += a;
        }
        //不连续的数字的两倍和
        setSum = setSum * 2;

        int vSum = 0;
        for (auto an : nums) {
            vSum += an;
        }

        int onlyOne = setSum - vSum;

        return onlyOne;

    }
};