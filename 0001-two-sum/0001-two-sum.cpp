class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int s = nums.size();
        int l = 0;
        int r = s-1;
        vector<int> v;
        vector<int> temp = nums;
        sort(nums.begin(), nums.end());
        while(l<r){
            if(nums[l]+nums[r] < target){
                l++;
            }
            else if(nums[l]+nums[r] > target){
                r--;
            }
            else{
                int flag = 0;
                for(int i = 0; i<s; i++){
                    if(temp[i]==nums[l] && flag == 0){
                        v.push_back(i);
                        flag = 1;
                        
                    }
                    else if(temp[i]==nums[r]){
                        v.push_back(i);
                    }
                }
                if(v[0]==v[1]){
                    v[1]++;
                }
                
                return v;
            }
        }
        return {};
    }
};
