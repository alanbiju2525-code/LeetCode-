class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string s = "";
        int i = 0;
        while(i < word1.length() && i < word2.length()){
            s += word1[i];
            s += word2[i];
            i++;
        }
        if(word1.length() > word2.length()){
            s += word1.substr(i);
        }
        else{
            s += word2.substr(i);
        }
        return s;
    }
};