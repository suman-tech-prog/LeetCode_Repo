class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        for(int j = 0; j < nums.size()-1; j++)
        {
            for(int i = j+1; i < nums.size(); i++)
            {
                if(target - nums[j] == nums[i])
                {
                    vector<int> res;
                    res.push_back(j);
                    res.push_back(i);
                    return res;
                }
            }
        }
        return res ;
    }
};