import java.util.Scanner;

public class Searching {
    public static void main(String[] args) {
        
        
        Scanner in = new Scanner(System.in);
        System.out.print("Enter the number of elements: ");
        int n = in.nextInt();
        int[] arr = new int[n];
        
        System.out.println("Enter numbers: ");
        for (int i = 0; i < arr.length; i++) {
            arr[i] = in.nextInt();
        }
        System.out.println("Enter the element to search: ");
        int target = in.nextInt();
        //Linear search

        // for(int i = 0; i < arr.length; i++) {
        //     if(arr[i] == num) {
        //         System.out.println("Element found at index: " + i);
        //         return 0;
        //     }
        // }
        // System.out.println("Not found");
        

        //binary search
        int start=0;
        int end=arr.length -1;

        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid] ==  target){
                System.out.println("Element found at index: " + mid);
                return;
            }
            else if(arr[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

    }
}
