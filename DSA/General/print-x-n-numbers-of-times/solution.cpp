class Solution {
public:
    void printX(int X, int N) {
        if (N==0){
            cout << "\n";
            return;
        }
    
        for (int i=0;i<N-1;i++) {
            cout << X;
            cout << " ";
        }
        cout << X;
