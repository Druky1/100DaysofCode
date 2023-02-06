// Running Sum of 1D Array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> result;
        for(int i = 0; i<nums.size(); i++){
            sum += nums[i];
            result.push_back(sum);
        }
        return result;
        
    }
};
