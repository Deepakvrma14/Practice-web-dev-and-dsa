public class postfix_expression {
    public static void main(String[] args) {
        //postfix expression
        String s = "23+5*7+";
    System.out.println(postfix(s,0));

    }
    static int postfix(String s, int i){
        if(i == s.length()){
            return 0;
        }
        char temp = s.charAt(i);
        if(temp == '+'){
            return postfix(s,i+1) + postfix(s,i+1);
        }
        if(temp == '-'){
            return postfix(s,i+1) - postfix(s,i+1);
        }
        if(temp == '*'){
            return postfix(s,i+1) * postfix(s,i+1);
        }
        if(temp == '/'){
            return postfix(s,i+1) / postfix(s,i+1);
        }
        else{
            return temp - '0';
        }
    }
}
