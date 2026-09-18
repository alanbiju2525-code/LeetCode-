class Solution {
public:
    string truncateSentence(string s, int k) {
        string n = "";
        int count = 0;
        for(char c : s){
            n += c;
            if(c == ' '){
                count++;
            }

            if(count == k){
                n.pop_back();
                break;
            }
        }
        return n;
    }
};