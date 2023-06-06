#include <stdio.h>
#include <stdlib.h>

struct workshop_node{
    int year;
    int profit;
    int loss;
    int investment;
    int bikes;
    struct workshop_node *next;
};


int main(){
    int i = 0, n, total_profit = 0, total_loss = 0, total_investment = 0, total_bikes = 0, total = 0;
    struct workshop_node *head = NULL, *temp = NULL, *new_node = NULL;
    printf("Enter the number of workshops: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        new_node = (struct workshop_node *)malloc(sizeof(struct workshop_node));
        printf("\nEnter data for workshop %d\n", i+1);
        printf("Enter the year of the workshop: ");
        scanf("%d", &new_node->year);
        printf("Enter the profit of the workshop: ");
        scanf("%d", &new_node->profit);
        printf("Enter the loss of the workshop: ");
        scanf("%d", &new_node->loss);
        printf("Enter the investment of the workshop: ");
        scanf("%d", &new_node->investment);
        printf("Enter the number of bikes sold in the workshop: ");
        scanf("%d", &new_node->bikes);
        total_profit += new_node->profit;
        total_loss += new_node->loss;
        total_investment += new_node->investment;
        total_bikes += new_node->bikes;
        new_node->next = NULL;
        if(head == NULL){
            head = new_node;
        }
        else{
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = new_node;
        }
    }
    temp = head;
    while(temp != NULL){
        printf("\nYear: %d", temp->year);
        printf("\nProfit: %d", temp->profit);
        printf("\nLoss: %d", temp->loss);
        printf("\nInvestment: %d", temp->investment);
        printf("\nBikes: %d", temp->bikes);
        temp = temp->next;
        printf("\n");
    }
    total = total_profit - total_loss;
    printf("Total :", total);
    return 0;

}
