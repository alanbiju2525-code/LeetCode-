class Solution {
public:
    int removePalindromeSub(string s) {
        string rev = s;
        reverse(rev.begin(),rev.end());

        int i = 0;
        int count;
       
            if(rev == s){
               return count = 1;
            }
            
      
        return count = 2;
    }
};