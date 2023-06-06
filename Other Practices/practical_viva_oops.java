import java.util.ArrayList;
aim code output learning objectoibe
import java.util.Scanner;

public class practical_viva_oops {
    public static void main(String[] args) {

        ArrayList<Integer> list = new ArrayList<Integer>();
        Scanner sc = new Scanner(System.in);

        //add
        System.out.println("Enter the size of the arraylist");
        int n = sc.nextInt();
        System.out.println("Enter the elements of the arraylist");
        for(int i=0;i<n;i++){
            list.add(sc.nextInt());
        }
        System.out.println("The arraylist is: "+list);

        //get
        System.out.println("Enter the index of the element you want to get");
        int index = sc.nextInt();
        System.out.println("The element at index "+index+" is: "+list.get(index));

        //set
        System.out.println("Enter the index of the element you want to set");
        int index1 = sc.nextInt();
        System.out.println("Enter the element you want to set");
        int element = sc.nextInt();
        list.set(index1, element);
        System.out.println("The arraylist after setting is: "+list);

        //remove
        System.out.println("Enter the index of the element you want to remove");
        int index2 = sc.nextInt();
        list.remove(index2);
        System.out.println("The arraylist after removing is: "+list);



        


    }
}
