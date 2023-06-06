// Write a program to implement of different operation on a binary search tree

#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *root = NULL;

struct node *createNode(int x){
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

void insert(int x){
    struct node *newnode = createNode(x);
    if(root == NULL){
        root = newnode;
        return;
    }
    struct node *temp = root;
    while(1){
        if(x < temp->data){
            if(temp->left == NULL){
                temp->left = newnode;
                return;
            }
            temp = temp->left;
        }
        else{
            if(temp->right == NULL){
                temp->right = newnode;
                return;
            }
            temp = temp->right;
        }
    }
}

void inorder(struct node *temp){
    if(temp == NULL){
        return;
    }
    inorder(temp->left);
    printf("%d ", temp->data);
    inorder(temp->right);
}

void preorder(struct node *temp){
    if(temp == NULL){
        return;
    }
    printf("%d ", temp->data);
    preorder(temp->left);
    preorder(temp->right);
}

void postorder(struct node *temp){
    if(temp == NULL){
        return;
    }
    postorder(temp->left);
    postorder(temp->right);
    printf("%d ", temp->data);
}

int main(){
    int ch, x;
    while(1){
        printf("\n1. Insert\n2. Inorder\n3. Preorder\n4. Postorder\n5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1: printf("Enter the element to be inserted: ");
                    scanf("%d", &x);
                    insert(x);
                    break;
            case 2: inorder(root);
                    break;
            case 3: preorder(root);
                    break;
            case 4: postorder(root);
                    break;
            case 5: exit(0);
            default: printf("Invalid choice");
        }
    }
    return 0;
}
