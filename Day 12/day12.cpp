// Search Insert Position

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    int n = nums.size();
    int start = 0, end = n - 1, ans = -1;
    while(start <= end)
    {
        int mid = start + (end - start) / 2;
        if(nums[mid] == target){
            return mid;
        }
        if(nums[mid] < target)
        {
            start = mid + 1;
            ans = mid + 1;
        }
        else
        {
            ans = mid;
            end = mid - 1;
        }
    }
    return ans;
}
