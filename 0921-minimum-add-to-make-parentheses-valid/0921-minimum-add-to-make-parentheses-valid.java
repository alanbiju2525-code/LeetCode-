class Solution {
    public int minAddToMakeValid(String s) {
        Stack<Character> st = new Stack<>();

        int i=0;
        while(i < s.length()){
            if(s.charAt(i) == '('){
                st.push('(');
            }
            if(s.charAt(i) == ')'){
                if (st.empty()) {
                    st.push(')');
                }
                else if(st.peek() != '('){
                    st.push(')');
                }
                else{
                    st.pop();
                }
            }
            i++;
        }
        if(st.empty()){
            return 0;
        }
        return st.size();
    }
}