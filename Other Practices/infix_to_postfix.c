// Write a program to demonstrate the use of stack (implemented using linear array) in converting 
// arithmetic expression from infix notation to postfix notation.

// 1. take empty stack
// 2. if ch == operand, print ch
// 3. if ch == operator, push ch in between
// 4. if ch == (,{} push it to stack
// 5. if ch == ),} pop all the elements from stack and print it
// 6. push the remaining elements from stack



// infix to postfix

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    char infix[100], postfix[100], stack[100];
    int i, j, k, top = -1;
    printf("Enter the infix expression: ");
    scanf("%s", infix);
    for(i = 0; i < strlen(infix); i++){
        if(infix[i] == '(' || infix[i] == '{'){
            stack[++top] = infix[i];
        }
        else if(infix[i] == ')' || infix[i] == '}'){
            while(stack[top] != '(' && stack[top] != '{'){
                postfix[j++] = stack[top--];
            }
            top--;
        }
        else if(infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/'){
            while(stack[top] == '*' || stack[top] == '/' || stack[top] == '+' || stack[top] == '-'){
                postfix[j++] = stack[top--];
            }
            stack[++top] = infix[i];
        }
        else{
            postfix[j++] = infix[i];
        }
    }
    while(top != -1){
        postfix[j++] = stack[top--];
    }
    postfix[j] = '\0';
    printf("The postfix expression is: %s", postfix);
    return 0;
}