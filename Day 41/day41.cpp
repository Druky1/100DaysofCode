// Maximum Product of Three Numbers

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size() - 1;
        sort(nums.begin(), nums.end());
        int a = nums[n] * nums[n-1] * nums[n - 2];
        int b = nums[n] * nums[0] * nums[1]; 
        int prod = max(a, b);
        return prod;
        
    }
};
