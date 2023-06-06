// Write a program to demonstrate the implementation of various operations on a linear queue and circular represented using a linear array. 

#include <stdio.h>
#include <stdlib.h>

// linear queue

// int main(){
//     int queue[100], front = -1, rear = -1, n, i, ch, item;
//     printf("Enter the size of the queue: ");
//     scanf("%d", &n);
//     while(1){
//         printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &ch);
//         switch(ch){
//             case 1: if(rear == n-1){
//                         printf("Queue is full");
//                     }
//                     else{
//                         printf("Enter the item to be inserted: ");
//                         scanf("%d", &item);
//                         if(front == -1){
//                             front = 0;
//                         }
//                         queue[++rear] = item;
//                     }
//                     break;
//             case 2: if(front == -1){
//                         printf("Queue is empty");
//                     }
//                     else{
//                         printf("The deleted item is: %d", queue[front]);
//                         if(front == rear){
//                             front = rear = -1;
//                         }
//                         else{
//                             front++;
//                         }
//                     }
//                     break;
//             case 3: if(front == -1){
//                         printf("Queue is empty");
//                     }
//                     else{
//                         printf("The elements of the queue are: ");
//                         for(i = front; i <= rear; i++){
//                             printf("%d ", queue[i]);
//                         }
//                     }
//                     break;
//             case 4: exit(0);
//             default: printf("Invalid choice");
//         }
//     }
//     return 0;
// }

// circular queue

// int main(){
//     int queue[100], front = -1, rear = -1, n, i, ch, item;
//     printf("Enter the size of the queue: ");
//     scanf("%d", &n);
//     while(1){
//         printf("\n1. Insertion\n2. Deletion\n3. Display\n4. Exit\n");
//         printf("Enter your choice: ");
//         scanf("%d", &ch);
//         switch(ch){
//             case 1: if((front == 0 && rear == n-1) || (front == rear+1)){
//                         printf("Queue is full");
//                     }
//                     else{
//                         printf("Enter the item to be inserted: ");
//                         scanf("%d", &item);
//                         if(front == -1){
//                             front = 0;
//                         }
//                         if(rear == n-1){
//                             rear = 0;
//                         }
//                         else{
//                             rear++;
//                         }
//                         queue[rear] = item;
//                     }
//                     break;
//             case 2: if(front == -1){
//                         printf("Queue is empty");
//                     }
//                     else{
//                         printf("The deleted item is: %d", queue[front]);
//                         if(front == rear){
//                             front = rear = -1;
//                         }
//                         else if(front == n-1){
//                             front = 0;
//                         }
//                         else{
//                             front++;
//                         }
//                     }
//                     break;
//             case 3: if(front == -1){
//                         printf("Queue is empty");
//                     }
//                     else{
//                         printf("The elements of the queue are: ");
//                         if(front <= rear){
//                             for(i = front; i <= rear; i++){
//                                 printf("%d ", queue[i]);
//                             }
//                         }
//                         else{
//                             for(i = front; i < n; i++){
//                                 printf("%d ", queue[i]);
//                             }
//                             for(i = 0; i <= rear; i++){
//                                 printf("%d ", queue[i]);
//                             }
//                         }
//                     }
//                     break;
//             case 4: exit(0);
//             default: printf("Invalid choice");
//         }
//     }
//     return 0;
// }

Algorithm for linear queue
1. Start
2. Declare the queue array and the variables front and rear
3. Set front and rear to -1
4. Display the menu
5. Read the choice
6. If choice is 1
    6.1 If rear is equal to n-1
        6.1.1 Display Queue is full
    6.2 Else
        6.2.1 Read the item to be inserted
        6.2.2 If front is equal to -1
7. End
        

Algorithm for circular queue
1. Start
2. Declare the queue array and the variables front and rear
3. Set front and rear to -1
4. Display the menu
5. Read the choice
6. If choice is 1
    6.1 If front is equal to 0 and rear is equal to n-1 or front is equal to rear+1
        6.1.1 Display Queue is full
    6.2 Else
        6.2.1 Read the item to be inserted
        6.2.2 If front is equal to -1
7. End
