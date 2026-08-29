class Solution {
public:
    int countDigit(int n) {
        if(n==0) return 1;
        int cnt=0;
        while(n>0){
            cnt = cnt + 1;
            n = n / 10;
        }
        return cnt;
    }
};