class Solution {
public:
    bool isPalindrome(int n) {
     int original = n;
     int num = 0;
     while(n>0){
        int rem = n%10;
        num = (num*10) + rem;
        n = n/10;
     }
     if(num==original) return true;
     else return false;
    }
};