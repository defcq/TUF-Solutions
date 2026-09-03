class Solution {
public:
    bool isArmstrong(int n) {
int original = n;
        int temp = n;
        int digits = 0;

        while (temp > 0) {
            digits++;
            temp = temp / 10;
        }

        temp = n;
        int sum = 0;

        while (temp > 0) {
            int rem = temp % 10;
            int power = 1;

            for (int i = 0; i < digits; i++) {
                power = power * rem;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        return sum == original;
    
    }
};