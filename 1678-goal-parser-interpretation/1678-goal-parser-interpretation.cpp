class Solution {
public:
    string interpret(string command) {
        string temp = "";
        int i = 0;
        while(i < command.length()){
            if(command[i] == 'G'){
                temp += 'G';
                i++;
            }
            else if(command[i] == '(' && command[i+1]== ')'){
                temp += 'o';
                i = i+2;
            }
            else{
                temp += 'a';
                temp += 'l';
                i = i + 4;
            }
        }
        return temp;
    }
};