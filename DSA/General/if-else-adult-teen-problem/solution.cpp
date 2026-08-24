#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void isAdult(int age) {
        if (age >= 18) {
            cout << "Adult\n";
        }
        else {
            cout << "Teen\n";
        }
    }
};