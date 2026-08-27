class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int s = nums.size();
        int z = s;
        

        vector<int> temp = nums;
        for(int i=0; i<s; i++){
            for(int j=i+1; j<s; j++){
                if(temp[i]==temp[j]){
                    temp.erase(temp.begin() + j);
                    s--;
                    j--;
                }
            }
        }
        int k = temp.size();
        
        for(int i =0; i<k; i++){
            nums[i] = temp[i];
            
        }
        

        
      
        return k;
    }
};