class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> set1, set2;

        for(int i = 0; i<nums1.size(); i++){
            set1.insert(nums1[i]);
        }
        for(int i = 0; i<nums2.size(); i++){
            set2.insert(nums2[i]);
        }
        set<int> common;
        for(int i : set1){
            if(set2.find(i) != set2.end()){
                common.insert(i);
            }
        }
        for(int i : common){
           
                set1.erase(i);
                set2.erase(i);
            
        }
        vector<vector<int>> k(2);

        for(int i : set1){
            k[0].push_back(i);
        }
        for(int i : set2){
            k[1].push_back(i);
        }
        return k;
    }
};