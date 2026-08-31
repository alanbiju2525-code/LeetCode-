class Solution {
public:
    void reverseString(vector<char>& s) {
        int l = s.size()-1;
        int m = 0;
        while(m<l){
            char temp;
            temp = s[l];
            s[l] = s[m];
            s[m] = temp;
            m++;
            l--;
        }
    }
};