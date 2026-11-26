class Solution {
public:
    bool canAliceWin(int n) {
        if(n<10){
            return false;
        }
        int count = 10;
        bool flag1 = true;
     
        int i = 0;
        while(true){
            n = n - count;
            
            if(i%2 == 0){
                flag1 = true;
            }
            else{
                flag1 = false;
            }
            count--;

            if(n< count){
                break;
            }
           
            i++;
        }
        return flag1;
    }
};