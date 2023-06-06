#include<stdio.h>
int binarSearch(int start, int end, int arr[], int target){

    while(start<=end){
        int mid = start + (end-start)/2;
        if (arr[mid] == target) return mid;
        if (arr[mid] > target) return binarSearch(start, mid - 1, arr, target);
        if (arr[mid] < target) return binarSearch(mid + 1, end, arr, target);
    }
    return -1;
    
}

int[] sort(int arr[], int n){
    int newarr[n];
    for(int i=0;i<n;i++){
        newarr[i] = arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(newarr[i]>newarr[j]){
                int temp = newarr[i];
                newarr[i] = newarr[j];
                newarr[j] = temp;
            }
        }
    }
    return newarr;
}

int input(int arr[], int n){
    printf("Enter numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d",&arr[i]);
    }
    return arr;
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
        scanf("%d",&target);

    int index = binarSearch(0, n - 1, arr, target);
    if(index == -1) printf("Element not found");
    else printf("Element found at index %d", index);
}