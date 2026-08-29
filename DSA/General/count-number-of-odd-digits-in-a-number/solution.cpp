class Solution {
public:
    int countOddDigit(int n) {
        int cnt=0;
        int rem;
        if (n==0) return 0;
        while (n > 0){
            rem = n%2;
            if(rem) cnt++;
            n = n/10;
            
        }
        return cnt;

    }
};