class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        int s = nums.size();
        int k =0;
        int j =0;
        

        for(int i=0; i<s;i++){
            if(nums[i]!=val){
            
                nums[j]=nums[i];
                j++;
                k++;
            }
        }
        for(int i=0; i<s; i++){
            cout<<nums[i]<<" ";
        }
        return k;
    }
};
