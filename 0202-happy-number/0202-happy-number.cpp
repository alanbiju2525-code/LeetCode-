class Solution {
public:
    bool isHappy(int n) {
        while (n != 1 && n != 4) {
            int k = 0;

            while (n > 0) {
                int digit = n % 10;
                k += digit * digit;
                n = n / 10;
            }

            n = k;
        }

        return n == 1;
    }
};

