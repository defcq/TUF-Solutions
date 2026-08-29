class Solution {
public:
    void pattern16(int n) {
        int d=65;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout << char(d);
                
            }
            d++;
            cout << endl;
        }

    }
};