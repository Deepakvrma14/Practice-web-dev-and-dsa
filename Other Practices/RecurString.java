public class RecurString {
    
    static int length(char s[]){
        if(s[0] == '\0'){
            return 0;
        }
        int smallStringLength = length(s[]+1);
        return 1+smallStringLength;
    }
    public static void main(String[] args) {
        char[] name = 'Deepak';
        int length = length(name);
        System.out.println(length);
    }
}
