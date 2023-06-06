public class MostComplicatedProblem {

    public static void main(String[] args) {
        // huffman coding
        String s = "aaabbc";
        int freq[] = {3,2,1};
        int n = s.length();
        System.out.println(huffman(s,freq,n));


    }
    static int huffman(String s, int freq[], int n){
        if(n == 0){
            return 0;
        }
        
        if(n == 1){
            return freq[0];
        }
        int min1 = Integer.MAX_VALUE;
        int min2 = Integer.MAX_VALUE;
        int min1_index = -1;
        int min2_index = -1;
        for(int i=0;i<n;i++){
            if(freq[i] < min1){
                min2 = min1;
                min2_index = min1_index;
                min1 = freq[i];
                min1_index = i;
            }
            else if(freq[i] < min2){
                min2 = freq[i];
                min2_index = i;
            }
        }
        int temp = min1 + min2;
        freq[min1_index] = temp;
        freq[min2_index] = freq[n-1];
        return huffman(s,freq,n-1);
    }


}
