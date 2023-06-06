#include <stdio.h>
int main(){
    
    
        printf("Enter the number of elements: ");
        int n = 0;
        scanf("%d",&n);

        int arr[n];
        
        printf("Enter numbers: ");
        for (int i = 0; i < n; i++) {
            scanf("%d",&arr[i]);
        }
        printf("Enter the element to search: ");
        int target;
        scanf("%d",target);

    int start=0;
    int end=n -1;

        while(start<=end){
            int mid = start + (end-start)/2;
            if(arr[mid] ==  target){
                printf("Element found at index: " + mid);
                return 0;
            }
            if(arr[mid]<target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        printf("not found");
        return 0;

}