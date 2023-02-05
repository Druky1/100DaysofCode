// Nth Tribonacci Number

class Solution {
public:
    int tribonacci(int n) {
        vector<int> trib;
        trib.push_back(0);
        trib.push_back(1);
        trib.push_back(1);

        for(int i = 3; i<=n; i++){
            int fib = trib[i-1] + trib[i-2] + trib[i-3];
            trib.push_back(fib);
        }
        return trib[n];
}
        
};
