// Program to implement Queue using Linked list. 

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *front = NULL;
struct node *rear = NULL;

void enqueue(int x){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = NULL;
    if(front == NULL && rear == NULL){
        front = rear = newnode;
        return;
    }
    rear->next = newnode;
    rear = newnode;
}

void dequeue(){
    struct node *temp = front;
    if(front == NULL){
        printf("Queue is empty");
        return;
    }
    if(front == rear){
        front = rear = NULL;
    }
    else{
        front = front->next;
    }
    free(temp);
}

void display(){
    struct node *temp = front;
    if(front == NULL){
        printf("Queue is empty");
        return;
    }
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main(){
    int ch, x;
    while(1){
        printf("\n1. Enqueue\n2. Dequeue\n3. Display\n4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: printf("Enter the element to be inserted: ");
                    scanf("%d", &x);
                    enqueue(x);
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: exit(0);
            default: printf("Invalid choice");
        }
    }
    return 0;

}

Algorithm

Step 1: Start
Step 2: Declare front and rear as NULL
Step 3: Create a node
step 4: Create function enqueue to insert an element in the queue by creating a new node and inserting it at the end of the queue and updating the rear pointer to point to the new node
Step 5: Create function dequeue to delete an element from the queue by deleting the node at the front of the queue and updating the front pointer to point to the next node
Step 6: Create function display to display the elements of the queue
step 7: Inside the main function, create a menu driven program to perform the above operations
Step 8: Stop

