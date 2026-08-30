class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string temp = strs[0];

        for(int k = 1; k < strs.size(); k++) {

            string a = temp;
            string b = strs[k];

            int i = 0;
            temp = "";

            while(i < a.length() && i < b.length()) {

                if(a[i] == b[i]) {
                    temp += a[i];
                }
                else {
                    break;
                }

                i++;
            }
        }

        return temp;
    }
};