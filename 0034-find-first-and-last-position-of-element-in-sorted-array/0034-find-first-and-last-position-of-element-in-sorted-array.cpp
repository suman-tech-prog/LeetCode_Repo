class Solution {
public:
int lower_bound(vector<int> &arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if ( arr[mid] >= k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        low = mid + 1;       
    }
    return ans;
}
int upper_bound(vector<int> &arr, int n, int k)
{
    int low = 0;
    int high = n-1;
    int ans = n;
    while(low <= high)
    {
        int mid = (low + high) / 2;
        if ( arr[mid] > k)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        low = mid + 1;       
    }
    return ans;
}
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int lb = lower_bound(nums, n, target);
        if(lb == n || nums[lb] != target) return {-1, -1};
        return {lb, upper_bound(nums, n, target)-1};
    }
};