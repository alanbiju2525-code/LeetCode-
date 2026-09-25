class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0; i<s.length(); i++){
            if(s == goal){
                return true;
            }
            s = s.back() + s.substr(0, s.size() - 1);
        }
        return false;
    }
};