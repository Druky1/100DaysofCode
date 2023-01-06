// Find the Middle Index in Array

class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int total_sum=0;
      
        
        for(int i=0;i<nums.size();i++)
                total_sum +=nums[i];
        
       int  right_sum=total_sum;
       int left_sum=0;
        
         for(int j=0;j<nums.size();j++){
                 
                 right_sum=right_sum-nums[j];
                 
                 if(left_sum ==right_sum)
                         return j;
                 
                 left_sum +=nums[j];
                 
         }
        
        return -1;
        
    }
};
