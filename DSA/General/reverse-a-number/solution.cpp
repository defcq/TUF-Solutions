class Solution {
public:
    int reverseNumber(int n) {
int num=0;
while(n>0){
    int rem = n % 10;
    num = (num*10) + rem;
    n = n/10;
    
}
return num;
    }
};