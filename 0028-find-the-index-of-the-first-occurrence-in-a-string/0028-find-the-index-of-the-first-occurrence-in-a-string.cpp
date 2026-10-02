class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.length() < needle.length()) {
            return -1;
        }
        int i = 0;
        int len = haystack.length();
        while(i<len){
            if(haystack.substr(i,needle.length()) == needle){
                return i;
            }
            i++;
        }
        return -1;
    }
};