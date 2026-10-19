class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int i = 0;
        vector<int> k;
        k.push_back(0);
        while(i<gain.size()){
            k.push_back(gain[i]+k[i]);
            i++;
        }
        sort(k.begin(),k.end());

        return k[k.size()-1];
    }
};