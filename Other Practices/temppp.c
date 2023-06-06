#include<stdio.h>
#include<stdlib.h>

struct cat{
    int number;
    int house;
    int status;
}c[8];



int main(){
    int i, n;
    printf("Enter the number of cats: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEnter data for cat %d \n", i+1);
        printf("Enter the number of the cat: ");
        scanf("%d", &c[i].number);
        printf("Enter the house of the cat: ");
        scanf("%d", &c[i].house);
        printf("Enter the status of the cat: ");
        scanf("%d", &c[i].status);
    }
    for(i = 0; i < n; i++){
        if(c[i].number == 778){
            if(c[i].status == 1){
                printf("The cat is alive and is in house %d", c[i].house);
            }
            else{
                printf("The cat is dead");
            }
        }
    }
    return 0;
}