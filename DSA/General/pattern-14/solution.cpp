class Solution {
public:
    void pattern14(int n) {
       
        for (int i=1;i<=n;i++){
             int d=65;
            for(int j=1;j<=i;j++){
                cout << char(d);
                d++;
                
            }
            
            cout << endl;
            
        }

    }
};