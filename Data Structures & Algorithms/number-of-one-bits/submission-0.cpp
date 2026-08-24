class Solution {
public:
    int hammingWeight(uint32_t n) {
        int dig=0;
        while(n>0){
            if(n & 1)dig++;
            n=n>>1;
        }
        return dig;
    }
};
