#include<bits/stdc++.h>

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i = 0;
        for(auto it:nums)
        {
            if(it != val)
            {
                nums[i++] = it;
            }
        }
        return i;
    }
};