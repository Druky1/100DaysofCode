//Complement of Base 10 integer

class Solution {
public:
    int bitwiseComplement(int n) {
        
    int m=n;
    if(n == 0){
        return 1;
    }
    int mask = 0;
    while(m!=0){
        mask = (mask << 1) | 1;
        m = m >> 1;

    }
    int comp = (~n) & mask;


return comp;
    }
};
