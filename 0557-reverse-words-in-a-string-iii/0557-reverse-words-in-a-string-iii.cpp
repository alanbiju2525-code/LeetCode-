class Solution {
public:
    string reverseWords(string s) {
        int i  = 0;
        int ptr = 0;
        while(i< s.length()){
            if(s[i] == ' '){
                reverse(s.begin() + ptr , s.begin() + i);
                ptr = i+1;
            }
            i++;
        }
        reverse(s.begin() + ptr, s.end());
        
        return s;
    }
};