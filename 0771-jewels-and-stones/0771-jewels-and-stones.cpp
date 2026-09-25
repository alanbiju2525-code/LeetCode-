class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char c : stones){
            for(char s : jewels){
                if(c == s){
                    count ++;
                }
            }
        }
        return count;
    }
};