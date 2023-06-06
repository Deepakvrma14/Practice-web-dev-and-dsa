#include<stdio.h>
#include<stdlib.h>

struct workshop{
    int year;
    int profit; 
    int loss;
    int investment;
    int bikes;
}s[10];

int main(){
    int i, n, total_profit = 0, total_loss = 0, total_investment = 0, total_bikes = 0, total = 0;
    printf("Enter the number of workshops: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("\nEnter data for workshop %d\n", i+1);
        printf("Enter the year of the workshop: ");
        scanf("%d", &s[i].year);
        printf("Enter the profit of the workshop: ");
        scanf("%d", &s[i].profit);
        printf("Enter the loss of the workshop: ");
        scanf("%d", &s[i].loss);
        printf("Enter the investment of the workshop: ");
        scanf("%d", &s[i].investment);
        printf("Enter the number of bikes sold in the workshop: ");
        scanf("%d", &s[i].bikes);
        total_profit += s[i].profit;
        total_loss += s[i].loss;
        total_investment += s[i].investment;
        total_bikes += s[i].bikes;
    }
    total = total_profit - total_loss;
    printf("\nTotal investment vs total profit vs total loss: %d vs %d vs %d\n", total_investment, total_profit, total_loss);
    printf("\nTotal bikes sold: %d", total_bikes);
    printf("\nTotal profit vs total loss: %d vs %d", total_profit, total_loss);
    printf("\nTotal profit - total loss: %d", total);
    return 0;
    
}
