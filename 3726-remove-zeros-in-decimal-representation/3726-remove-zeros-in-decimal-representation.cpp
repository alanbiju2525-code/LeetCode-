class Solution {
public:
    long long removeZeros(long long n) {
        int x  = 0;
        long long total = 0;
        while(n > 0){
            int x = n%10;

            if(x != 0){
                total = total*10 + x;
            }
            n = n/10;
        }
        long long ans = 0;
        while(total > 0){
            ans = ans*10 + total%10;
            total = total/10;
        }
        return ans;
    }
};