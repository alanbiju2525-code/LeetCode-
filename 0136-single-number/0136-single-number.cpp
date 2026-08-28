class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int l = nums.size();

        if (l == 1) {
            return nums[0];
        }

        int i = 0;

        while (i < nums.size()) {
            bool found = false;

            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] == nums[j]) {
                    nums.erase(nums.begin() + j);
                    nums.erase(nums.begin() + i);

                    found = true;
                    break;
                }
            }

            if (!found) {
                return nums[i];
            }
        }

        return 0;
    }
};