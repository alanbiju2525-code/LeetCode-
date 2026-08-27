class Solution {
    public int climbStairs(int n) {
        int s = 0 ;
        if(n<=2){
            return n;
        }
        
        else{
            
            int d1 = 1;
            int d2 = 2;;

            for(int i = 3; i<=n; i++){
                s = d1 + d2;
                d1 = d2;
                d2 = s;
            }
            
        }
    return s;    
    }
}