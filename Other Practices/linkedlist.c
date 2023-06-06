#include<stdio.h>

struct node{
    int data;
    struct node *next;


};  

// linked list insertion


void insert_at_pos(struct node **head, int x, int pos){
    struct node *temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    
    if(pos == 1){
        temp->next = *head;
        *head = temp;
        return;
    }
    struct node *curr = *head;
    for(int i = 1; i <= pos-2 && curr != NULL; i++){ 
        curr = curr->next; 
    }
    if(curr == NULL){
        return;
    }
    temp->next = curr->next;
    curr->next = temp;
}

void print(struct node *head){
    struct node *curr = head;
    while(curr != NULL){
        printf("%d ", curr->data);
        curr = curr->next;
    }
}

int main(){
    struct node *head = NULL;
    insert_at_pos(&head, 10, 1);
    print (head);
}