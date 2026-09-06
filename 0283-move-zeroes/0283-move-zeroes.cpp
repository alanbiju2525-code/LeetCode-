class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int s = nums.size();
        int i = 0;
        int j = 0;
        while(i<s){
            if(nums[i] == 0){
                nums.erase(nums.begin() + i);
                s--;
                j++;
            }
            else
            i++;
        }
        for(int k = 0; k<j; k++){
            nums.push_back(0);
        }
        
    }
};