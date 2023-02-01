// Element Appearing More Than 25% In Sorted Array

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int occur = arr.size()/4;
        for(int i = 0; i<arr.size(); i++){
            if(arr[i] == arr[i + occur]){
                return arr[i];
            }
        }
        return 0;
        
        
    }
};
