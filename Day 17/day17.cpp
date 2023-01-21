// Gas Station

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total = 0;
        int current = 0;
        int start = 0;
        for(int i = 0; i < gas.size(); i++){
            int remaining = gas[i] - cost[i];
            if (current < 0){
                start = i;
                current = remaining;
            }
            else{
                current = current + remaining;
            }
            total = total + remaining;
        }
        if (total < 0)
            return -1;
        else
            return start;
        
        
        
    }
};
