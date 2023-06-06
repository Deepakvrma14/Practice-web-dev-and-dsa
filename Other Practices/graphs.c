// Write a program to demonstrate the traversal of graph using Breadth first search
// Depth first search


#include <stdio.h>
#include <stdlib.h>

void bfs(int a[10][10], int n, int source){
    int visited[10] = {0}, queue[10], front = -1, rear = -1, i, j;
    visited[source] = 1;
    queue[++rear] = source;
    while(front != rear){
        i = queue[++front];
        printf("%d ", i);
        for(j = 0; j < n; j++){
            if(a[i][j] == 1 && visited[j] == 0){
                visited[j] = 1;
                queue[++rear] = j;
            }
        }
    }
}
  
void dfs(int a[10][10], int n, int source){
    int visited[10] = {0}, stack[10], top = -1, i, j;
    visited[source] = 1;
    stack[++top] = source;
    while(top != -1){
        i = stack[top--];
        printf("%d ", i);
        for(j = 0; j < n; j++){
            if(a[i][j] == 1 && visited[j] == 0){
                visited[j] = 1;
                stack[++top] = j;
            }
        }
    }
}

     
int main(){
    int a[10][10], n, i, j, source;
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix: ");
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            scanf("%d", &a[i][j]);
        }
    }
    // bfs iterative traversal
    printf("Enter the source vertex: ");
    scanf("%d", &source);
    printf("BFS traversal: ");
    bfs(a, n, source);
    printf("\nDFS traversal: ");
    dfs(a, n, source);
    return 0;

}

