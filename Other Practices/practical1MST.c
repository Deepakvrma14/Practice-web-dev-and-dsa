#include<stdio.h>
#include<stdlib.h>

struct restraunt{
    char months[10];
    int year;
    int profit;
    int loss;
    int investment;
    int branches;
    
    struct restraunt *next;
};
int main(){
    int i, n, total_profit = 0, total_loss = 0, total_investment = 0, total_branches = 0, total = 0;
    struct restraunt *head = NULL, *temp = NULL, *new_node = NULL;
    printf("Enter the number of years for what you want to insert data: ");
    scanf("%d", &n);
    for(i=0; i<n; i++){
        new_node = (struct restraunt *)malloc(sizeof(struct restraunt));
        printf("\nEnter data for year %d\n", i+1);
        printf("Enter the year: ");
        scanf("%d", &new_node->year);
        printf("Enter the profit: ");
        scanf("%d", &new_node->profit);
        printf("Enter the loss: ");
        scanf("%d", &new_node->loss);
        printf("Enter the investment: ");
        scanf("%d", &new_node->investment);
        printf("Enter the number of branches: ");
        scanf("%d", &new_node->branches);
        printf("Enter the months: ");
        scanf("%s", &new_node->months);
        total_profit += new_node->profit;
        total_loss += new_node->loss;
        total_investment += new_node->investment;
        total_branches += new_node->branches;
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
        printf("\nBranches: %d", temp->branches);
        printf("\nMonths: %s", temp->months);
        temp = temp->next;
        printf("\n");
    }
    total = total_profit - total_loss;
    printf("Total :", total);
    return 0;
}