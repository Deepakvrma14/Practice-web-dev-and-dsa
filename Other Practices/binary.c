#include <stdio.h>

int binarSearch(int start, int end, int arr[], int n){
    int mid = (start + end) / 2;
    if (start > end) return -1;
    if (arr[mid] == n) return mid;
    if (arr[mid] > n) return binarSearch(start, mid - 1, arr, n);
    if (arr[mid] < n) return binarSearch(mid + 1, end, arr, n);
}

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

    int index = binarSearch(0, n - 1, arr, target);
    if(index == -1) printf("Element not found");
    else printf("Element found at index %d", index);
    return 0;
}
// int main(){
    
    
       
//     int start=0;
//     int end=n -1;

//         while(start<=end){
//             int mid = start + (end-start)/2;
//             if(arr[mid] ==  target){
//                 printf("Element found at index: " + mid);
//                 return 0;
//             }
//             if(arr[mid]<target){
//                 start = mid+1;
//             }
//             else{
//                 end = mid-1;
//             }
//         }
//         printf("not found");
//         return 0;

// }