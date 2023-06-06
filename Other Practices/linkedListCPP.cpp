// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next; // pointer node ko point kr rha isley pointer of node type

//     Node(int d){
//         this -> data = d;
//         this -> next = NULL;

//     }

    
// };

// // insertion

// void insertAtHead(Node* &head, int d){
//     Node* temp = new Node(d);
//     temp->next = head;
//     head  = temp;
// }

// void print(Node* head){
//     Node* temp = head;
//     while(head!=NULL){
//         cout<<temp->data<<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }

// void InsertAtTail(Node* &tail, int d){
//     Node* temp = new Node(d);
//     tail->next = temp;
//     tail  = temp;
// }
// int main(){
//     Node* node1 = new Node(1);
//     // cout<<node1->data<<endl<< node1->next ;
//     Node* head = node1; 
//     Node* tail = node1;

//     print(head);
//     insertAtHead(head, 5);

//     print(head);

//     InsertAtTail(tail,10);
//     print(head);

    
// }

#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};
void print(node* head){
    
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtHead(node * &head,int d){
    node* temp = new node(d);
    head->next = NULL;
    temp->next = head;
    head = temp;
}
int main(){
    // node* n1=
    node* head = new node(5);;
    insertAtHead(head, 6);
    print(head);

    // print(head);
}

