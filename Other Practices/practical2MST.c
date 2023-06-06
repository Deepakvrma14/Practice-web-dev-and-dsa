#include<stdio.h>
#include<stdlib.h>

struct instrument{
    int number;
    int gift;
    int damaged;

}s[10];

int main(){
    int i, n;
    printf("Enter the number of instruments: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEnter data for instrument %d \n", i+1);
        printf("Enter the number of the instrument: ");
        scanf("%d", &s[i].number);
        printf("Enter the status of the instrument if damaged, enter 1 else 0: ");
        scanf("%d", &s[i].damaged);
        
    
    


                                                                                
        if(s[i].damaged == 1){
            printf("Enter the status of the gift: ");
            scanf("%d", &s[i].gift);
        }

    }
    for(i = 0; i < n; i++){
        printf("\nNumber: %d", s[i].number);
        if(s[i].damaged == 1){
            if(s[i].gift == 1){
                printf("The instrument is damaged and is a gift");
            }
            else{
                printf("The instrument is damaged and is not a gift");
            }
        }
        else{
            printf("The instrument is not damaged");
        }
        
    }
    return 0;
}