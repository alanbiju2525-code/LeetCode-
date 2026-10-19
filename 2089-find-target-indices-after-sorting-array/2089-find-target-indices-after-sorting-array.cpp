class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int i = 0;
        vector<int> k;
        while(i<nums.size()){
            if(nums[i]==target){
                k.push_back(i);
            }
            i++;
        }
        return k;
    }
};