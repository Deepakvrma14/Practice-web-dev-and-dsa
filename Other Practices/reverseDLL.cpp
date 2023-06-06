 // #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* prev;
//     node* next;

//     node(int d){
//         this->data = d;
//         this->prev = NULL;
//         this->next = NULL;
//     }
// };

// void print(node* head){
//     while(head!=NULL){
//         cout<<head->data<<" ";
//         head = head->next;
//     }
//     cout<<endl;
// }
// void printAddress(node* head){
//     while(head!=NULL){
//         cout<<"\n{" << head->prev << " "<< head->next << "}";

//         head = head->next;
//     }
    
// }
// void insertAtHead(node* &head,int d){
//     cout<<"\nInsertAtHead called \n";
//     node* temp = new node(d);
//     temp ->next = head;
//     head->prev  =temp;
//     head = temp;
// }
// void insertAtTail(node* &head, int d){
//     cout<<"\nInsertAtTail called\n";   
//     if(head == NULL ){
//             insertAtHead(head, d);
//             return;

//       }

    
//     node* newNode = new node(d);
//     node* temp = head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = newNode;
//     newNode->prev = temp; 
// }

// void insertAtPos(node* &head, int d, int pos){
//     cout<<"\nInsertAtPos called at "<< pos<<endl;
//     if(pos == 1){
//         insertAtHead(head,d);
//         return;
//     }
//     node* NodeToBeInserted = new node(d);
//     node* temp = head;
//     for (int i =  2; i <pos-1;i++){
//         temp = temp->next;
//     }
//     NodeToBeInserted->next = temp->next;
//     temp->next->prev = NodeToBeInserted;

//     temp->next = NodeToBeInserted;
//     NodeToBeInserted->prev = temp;
// }

// int main(){
//     node* node1 = new node(1);
//     node* head = node1;
//     node* tail = node1;

    
//     print(head);
//     printAddress(head);
//     insertAtHead(head,2);
//     print(head);
//     printAddress(head);
//     insertAtTail(head,3);
//     print(head);
//     printAddress(head);

//     insertAtPos(head,4,4);
//     print(head);
//     printAddress(head);
//     return 0;
// }




#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int d){
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
};

void print(node* head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
    cout<<endl;
}
void printAddress(node* head){
    while(head!=NULL){
        cout<<"\n{" << head->prev << " "<< head->next << "}";

        head = head->next;
    }
    
}
void insertAtHead(node* &head,node* &tail,int d){
    cout<<"\nInsertAtHead called \n";
    node* temp = new node(d);
    if(head == NULL){
        head = temp;
        tail = temp;
        return;
    }
    else{
        temp ->next = head;
    head->prev  =temp;
    head = temp;
    }
    
    
}
void insertAtTail(node* &head, node* &tail, int d){
    cout<<"\nInsertAtTail called \n";
    node* temp = new node(d);
    if(head == NULL){
         head = temp;
         tail = temp;
         return;

    }else{
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
    }
   

}

void insertAtPos(node* &head, int d, int pos, node* &tail){
    if(pos == 1){
        insertAtHead(head,tail,d);
        return;
    }
    node* temp = head;

    for(int i = 2;i<=pos-1;i++){
        temp = temp->next;
    }
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    node* newNode = new node(d);
    
    newNode->next = temp->next;
    temp ->next  = newNode;
    newNode->prev = temp;
    temp->next->prev = newNode;
}

void deleteAtHead(node* &head){
    cout<<"\ndelete at head\n";
    if(head == NULL){
        return;
    }
    node* temp = head;
    temp->next->prev = NULL;
    head = temp->next;

}
void deleteAtTail(node* &head, node* &tail){
    cout<<"\ndelete at tail\n";
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    while(temp->next->next!=NULL){
        temp = temp->next;
    }
    temp->next = NULL;
    tail = temp;
}

// void deleteattail
void deleteAtPos(node* &head, node* &tail, int pos){
    cout<<"\ndelete at pos called at "<<pos<<endl;

    if(head == NULL){
        return;
    }
    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    node* temp = head;
    node* nodedelete = temp->next;
    for(int i = 2;i<=pos-1;i++){
        
        temp = temp->next;
        nodedelete = temp->next;
    }
    if(nodedelete->next == NULL){
        deleteAtTail(head,tail);
        return;
    }
    temp->next = nodedelete->next;
    nodedelete->next->prev = temp;
}

node* recursiveReverse(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* chotaHead = recursiveReverse(head->next);
    // head->next->next = head->prev;
    // head->prev = head->next;
    
    // head->next->prev = head;
    // head = head->next->prev;
    // head->next->next =NULL;

    node* temp = head->next;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    head->prev = temp;
    temp->next= head;
    head->next = NULL;
    return chotaHead;
   
}


int main(){
    // node* node1 = new node(1);
    node* head = NULL;
    node* tail = NULL;

    
    print(head);
    printAddress(head);
    insertAtHead(head,tail,2);
    print(head);
    printAddress(head);
    insertAtTail(head,tail,3);
    print(head);
    insertAtTail(head,tail,4);
    print(head);
    insertAtTail(head,tail,5);
    print(head);

    cout<<endl<<endl;

    insertAtPos(head,6,4,tail);
    // print(head);

    // deleteAtHead(head);
    // print(head);
    // printAddress(head);

    // deleteAtTail(tail);
    //  print(head);
    // printAddress(head);
    // cout<<"head"<<head->data<<endl;
    // cout<<"tail"<<tail->data<<endl;
    // print(head);
    // deleteAtPos(head,tail, 5);
    print(head);

    head = recursiveReverse(head);
    print(head);
    // printAddress(head);
    
    
    return 0;
}