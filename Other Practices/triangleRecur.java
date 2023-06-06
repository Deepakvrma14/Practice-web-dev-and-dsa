class triangleRecur{
    public static void main(String[] args){
        int n = 5;
        System.out.println("The pattern is: ");
        triangle(n, 0);
    }
    // public static void triangle(int n){
    //     if(n == 0){
    //         return;
    //     }
    //     triangle(n-1);
    //     for(int i = 0; i < n; i++){
    //         System.out.print("* ");
    //     }
    //     System.out.println();
    // }
    static void triangle(int row, int col){
        if(row == 0){
            return;
        }
        if(col<row){
            System.out.print("*");
            triangle(row, col+1);
        }
        else{
            System.out.println();
            triangle(row-1, 0);
        }
    }
}