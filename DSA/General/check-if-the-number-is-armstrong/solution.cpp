            int rem = temp % 10;
            int power = 1;

            for (int i = 0; i < digits; i++) {
                power = power * rem;
            }

            sum = sum + power;
            temp = temp / 10;
        }

        return sum == original;
    
    }