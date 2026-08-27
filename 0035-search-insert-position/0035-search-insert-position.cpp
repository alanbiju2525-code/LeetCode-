class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==target){
                return i;
            }
        }
        int i=0;
        while(i<nums.size()){
            if(nums[i]>=target ){
                break;
            }
            else
            i++;
        }
        return i;
    
    }
};