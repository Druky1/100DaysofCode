// Two Sum 

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int store_1 = 0;
            int store_2 = 0;
            for(int i = 0; i<nums.size(); i++){
                for(int j = i+1; j<nums.size(); j++){
                    if(nums[i] + nums[j] == target){
                        store_1 = i;
                        store_2 = j;
                    }
                }
            }
            return {store_1, store_2};      

    }
    
};
