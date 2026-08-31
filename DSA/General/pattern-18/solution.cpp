class Solution {
public:
    void pattern18(int n) {
 for (int i = 0; i < n; i++) {
        for (int j = n - i - 1; j < n; j++) {
            cout << char('A' + j) << " ";
        }
        cout << endl;
    }

    }
};