//Maximum Ice Cream Bars

class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int count = 0;
        sort(costs.begin(), costs.end());
        for(int i = 0; i<costs.size();i++){
            if(coins < costs[i]){
                break;
            }
            else
            {
                coins = coins - costs[i];
                count++;
            }
        }
        return count;
        
    }
};
