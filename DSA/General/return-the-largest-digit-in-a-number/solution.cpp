class Solution {
public:
    int largestDigit(int n) {
int largest = 0;
while(n>0){
   int  rem = n%10;
    if(rem>=largest) largest = rem;
    n = n/10;
}
return largest;
    }
};