class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {

        int s = digits.size();
        int i = s - 1;

        
        while (i >= 0) {

           
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }

            
            digits[i] = 0;
            i--;
        }

        // If all digits were 9
        digits.insert(digits.begin(), 1);

        return digits;
    }
};

