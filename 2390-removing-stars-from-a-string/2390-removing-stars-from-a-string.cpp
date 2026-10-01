class Solution {
public:
    string removeStars(string s) {
        int i = 0;
        while(i < s.length()){
            if(s[i] == '*'){
                s.erase(i-1,2);
                i--;
            }
            else{
                i++;
            }

        }
        return s;
    }
};