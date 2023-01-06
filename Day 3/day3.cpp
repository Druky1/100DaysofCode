// Subtract the Product and the Sum of the Number 

class Solution {
public:
    int subtractProductAndSum(int n) {
        int prod = 1;
        int sum = 0;
        
        while(n!=0){
            int digit = n % 10;
            prod = prod * digit;
            sum = sum + digit;
            
            n = n/10;
        }
        
        int sol = prod - sum;
        return sol;
        
        
    }
};
