class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i = 0; i<nums.size(); i++){
            if(nums[i]<0){
                nums[i] = -1*nums[i];
            }
        }
        vector<long long> arr;
        long long k;
        sort(nums.begin(),nums.end());
        for(int i = 0; i<nums.size(); i++){
            if(i<nums.size()/2){
                k = -(long long)nums[i]*(long long)nums[i];
                arr.push_back(k);
            }
            else{
                k = (long long)nums[i]*(long long)nums[i];
                arr.push_back(k);
            }
        }
        long long sum = accumulate(arr.begin(),arr.end(),0LL);
        return sum;

    }
};