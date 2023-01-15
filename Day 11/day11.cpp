// Approach 1 : Linear Search (Brute Force)

class Solution {
public:
    int search(vector<int>& nums, int target) {
       int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == target){
                return i;
            }
        }
        return -1;
}
};


// Approach 2 : Binary Search (Optimized)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0, end = n-1;
        while(start<=end){
        int mid = start + (end-start)/2;
        if(nums[mid] == target){
            return mid;
        }
        else if(nums[start]<=nums[mid]){
            if(target >= nums[start] && target < nums[mid]){
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
        } else {
            if(target>nums[mid] && target<=nums[end]){
                start = mid + 1;
            }
            else{
                end = mid - 1;
            }
        }
    }
    return -1;
}
};
