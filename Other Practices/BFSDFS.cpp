#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next ;

    node(int d){
        data = d;
        next = NULL;
    }
};

//Insert at head
void insertAtHead(node* &head, int d){

    // create new node,point it to head, change head to new node

    node* temp = new node(d);
    temp->next = head;
    head = temp;
}
//creation of graph using adjacency list
void createGraph(node* adjList[], int n){
    int e;
    cout<<"Enter the number of edges: ";
    cin>>e;
    for(int i=0;i<e;i++){
        int u,v;
        cout<<"Enter the edge: ";
        cin>>u>>v;
        insertAtHead(adjList[u],v);
        insertAtHead(adjList[v],u);
    }
}

// traversal of graph using adjacency list
void printGraph(node* adjList[], int n){
    for(int i=0;i<n;i++){
        cout<<i<<"->";
        cout<<adjList[i]<<endl;
    }
}

//BFS traversal of graph using adjacency list

void BFS(node* adjList[], int n){
    bool visited[n];
    for(int i=0;i<n;i++){
        visited[i] = false;
    }
    int source;
    cout<<"Enter the source vertex: ";
    cin>>source;
    visited[source] = true;
    node* temp = adjList[source];
    while(temp!=NULL){
        if(visited[temp->data]==false){
            cout<<temp->data<<" ";
            visited[temp->data] = true;
        }
        temp = temp->next;
    }
}

int main(){
    int n;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    node* adjList[n];
    for(int i=0;i<n;i++){
        adjList[i] = NULL;
    }
    createGraph(adjList,n);
    printGraph(adjList,n);
    return 0;
}