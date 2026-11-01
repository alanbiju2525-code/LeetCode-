int removeElement(int* nums, int numsSize, int val) {
    int s = numsSize;
        int k =0;
        int j =0;
        

        for(int i=0; i<s;i++){
            if(nums[i]!=val){
            
                nums[j]=nums[i];
                j++;
                k++;
            }
        }
      
        return k;
}