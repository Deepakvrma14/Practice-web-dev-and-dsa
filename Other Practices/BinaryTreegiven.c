
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data){
    struct node *node = (struct node*)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

struct node *buildTree(int in[], int pre[], int inStrt, int inEnd){
    static int preIndex = 0;
    if(inStrt > inEnd){
        return NULL;
    }
    struct node *tNode = newNode(pre[preIndex++]);
    if(inStrt == inEnd){
        return tNode;
    }
    int inIndex = search(in, inStrt, inEnd, tNode->data);
    tNode->left = buildTree(in, pre, inStrt, inIndex-1);
    tNode->right = buildTree(in, pre, inIndex+1, inEnd);
    return tNode;
}

int search(int arr[], int strt, int end, int value){
    int i;
    for(i = strt; i <= end; i++){
        if(arr[i] == value){
            return i;
        }
    }
}

void printInorder(struct node *node){
    if(node == NULL){
        return;
    }
    printInorder(node->left);
    printf("%d ", node->data);
    printInorder(node->right);
}


struct node *constructTreeUtil(int pre[], int post[], int *preIndex, int l, int h, int size){
    if(*preIndex >= size || l > h){
        return NULL;
    }
    struct node *root = newNode(pre[*preIndex]);
    ++*preIndex;
    if(l == h){
        return root;
    }
    int i;
    for(i = l; i <= h; i++){
        if(pre[*preIndex] == post[i]){
            break;
        }
    }
    if(i <= h){
        root->left = constructTreeUtil(pre, post, preIndex, l, i, size);
        root->right = constructTreeUtil(pre, post, preIndex, i+1, h, size);
    }
    return root;
}

struct node *constructTree(int pre[], int post[], int size){
    int preIndex = 0;
    return constructTreeUtil(pre, post, &preIndex, 0, size-1, size);
}


int main(){
    int choice;
    printf("1. Preorder and Inorder\n2. Preorder and Postorder ");
    printf("Enter your choice: ");

    scanf("%d", &choice);

    if(choice == 1){
        int in[] = {4, 2, 5, 1, 3};
    int pre[] = {1, 2, 4, 5, 3};
    int len = sizeof(in)/sizeof(in[0]);
    struct node *root = buildTree(in, pre, 0, len-1);
    printf("Inorder traversal of the constructed tree is \n");
    printInorder(root);
    } else{
         int pre[] = {1, 2, 4, 8, 9, 5, 3, 6, 7};
    int post[] = {8, 9, 4, 5, 2, 6, 7, 3, 1};
    int size = sizeof(pre)/sizeof(pre[0]);
    struct node *root = constructTree(pre, post, size);
    printf("Inorder traversal of the constructed tree: \n");
    printInorder(root);
    }

   
    return 0;
}