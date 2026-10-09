class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> k;

        for(int i = 0; i<nums1.size(); i++){
            for(int j = 0; j<nums2.size(); j++){
                if(nums1[i] == nums2[j]){
                    k.push_back(nums1[i]);
                }
            }
        }
        sort(k.begin(),k.end());

        for(int i=0; i<k.size(); i++){
            if(i+1 < k.size() && k[i] == k[i+1]){
                k.erase(k.begin()+i);
                i--;
            }
        }
        return k;

    }
};