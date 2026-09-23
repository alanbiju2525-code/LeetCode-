class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        vector<int> nums;
        for(int i = 0; i<accounts.size(); i++){
            nums.push_back(accumulate(accounts[i].begin(),accounts[i].end(),0));
        }
        return *max_element(nums.begin(),nums.end());
    }
};