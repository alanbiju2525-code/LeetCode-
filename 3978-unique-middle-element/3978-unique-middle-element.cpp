class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int x = nums[nums.size()/2];
        int i = 0;
        while(i<nums.size()){
            if(i == nums.size()/2){
                i++;
                continue;
            }
            if(nums[i] ==  x){
                return false;
            }
            i++;
        }
        return true;
    }
};