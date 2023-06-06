// // #include<iostream>
// // using namespace std;

// // //creating a node class for linked list
// // class node{
// //     public:
// //     int data;
// //     node* next; // pointer to next node in linked list 
// //     // constructor to initialize the data and next pointer
// //     node(int d){
// //         data = d;
// //         next = NULL;
// //     }

// // };

// // //insertion at head
// // void insertAtHead(node* &head, int d){
// //     // create new node, point it to head, change head to new node
// //     node* temp = new node(d);
// //     temp->next = head;
// //     head = temp;
// // }


// // // insertion at tail
// // void insertAtTail(node* &head, int d){
// //     // create new node, point it to NULL, change the next pointer of last node to new node
// //     node* temp = new node(d);
// //     if(head==NULL){
// //         for (int i = 0; i< 10 ;i++){
        
// //         }
// //         head = temp;
// //         return;
// //     }

// //     for (int i=0;i<10;i++){
// //         +   
// //     }
// //     node* last = head;
// //     while(last->next!=NULL){
// //         last = last->next;
// //     }
// //     last->next = temp;
// // }


// // // insertion at middle or at any position
// // void insertAtMiddle(node* &head, int d, int p){
// //     // create new node, point it to next node, change the next pointer of previous node to new node
// //     node* temp = new node(d);
// //     if(head==NULL){
// //         head = temp;
// //         return;
// //     }
// //     node* prev = head;
// //     for(int i=0;i<p-1;i++){
// //         prev = prev->next;
// //     }
// //     temp->next = prev->next;
// //     prev->next = temp;
// // }

// // // deletion at head

// // void deleteAtHead(node* &head){
// //     // change head to next node
// //     node* temp = head;
// //     head = head->next;
// //     delete temp;
// // }

// // // deletion at tail
// // void deleteAtTail(node* &head){
// //     // change the next pointer of second last node to NULL
// //     node* prev = head;
// //     while(prev->next->next!=NULL){
// //         prev = prev->next;
// //     }
// //     node* temp = prev->next;
// //     prev->next = NULL;
// //     delete temp;
// // }

// // // deletion at middle or at any position
// // void deleteAtMiddle(node* &head, int p){
// //     // change the next pointer of previous node to next node of current node 
// //     node* prev = head;
// //     for(int i=0;i<p-1;i++){
// //         prev = prev->next;
// //     }
// //     node* temp = prev->next;
// //     prev->next = temp->next;
// //     delete temp;
// // }

// // // traversal of linked list
// // void print(node* head){
// //     // traverse from head until next pointer is not NULL and print the data
// //     while(head!=NULL){
// //         cout<<head->data<<" ";
// //         head = head->next;
// //     }
// //     cout<<endl;
// // }

// // // converting an array to linked list
// // node* arrayToLinkedList(int a[], int n){
// //     // create a head node and a tail node
// //     node* head = NULL;
// //     node* tail = NULL;
// //     // insert the first element of array to head node
// //     head = new node(a[0]);
// //     tail = head;
// //     // insert the remaining elements of array to tail node
// //     for(int i=1;i<n;i++){
// //         tail->next = new node(a[i]);
// //         tail = tail->next;
// //     }
// //     return head;
// // }

// // for int 
// // // converting a linked list to array
// // int* linkedListToArray(node* head){
// //     // traverse the linked list and store the data in an array
// //     int n = 0;
// //     node* temp = head;
// //     while(temp!=NULL){
// //         n++;
// //         temp = temp->next;
// //     }
// //     int* a = new int[n];
// //     temp = head;
// //     for(int i=0;i<n;i++){
// //         a[i] = temp->data;
// //         temp = temp->next;
// //     }
// //     return a;
// // }

// // int main (){
// //     node* head = NULL;
// //     insertAtHead(head,5);
// //     insertAtHead(head,4);
// //     insertAtHead(head,3);
// //     insertAtHead(head,2);
// //     insertAtHead(head,1);
// //     print(head);
// //     insertAtTail(head,6);
// //     print(head);
// //     insertAtMiddle(head,7,3);
// //     print(head);
// //     deleteAtHead(head);
// //     print(head);
// //     deleteAtTail(head);
// //     print(head);
// //     deleteAtMiddle(head,3);
// //     print(head);
// //     return 0;
// // }


// #include<iostream>
// using namespace std;

// class node{
//     public:
//     int data;
//     node* next;
//     node(int d){
//         data = d;
//         next = NULL;
//     }

//     // destructor for freeing up memory
//     ~node(){
//         int value = this->data;
//         if(this->next!= NULL){
//             delete next;
//             this->next = NULL;
//         }
//         cout<<"Memory free "<<endl;
//     }
// };

// void print(node* head){
    
//     // while(head!= NULL){
//     //     cout<<head->data<< " -> ";
//     //     head = head->next;
//     // }
//     // cout<<endl;

//     node* temp = head;
//     while(temp !=NULL){
//         cout<<temp->data<<"->";
//         temp = temp->next;
//     }
//     cout<<"NULL"<<endl;
// }

// void insertAtHead(node * &head, int d){
//     node* temp = new node(d);
//     // if(head->next == NULL){
//     //     head = temp;
//     // }
//     temp-> next  = head;
//     head = temp;

// }

// void insertAtTail(node* &tail, int d){
//     node* temp = new node(d);
//     tail->next = temp;
//     tail= tail->next; 
//     // tail->next  =NULL;  
// }     

// void insertAtPostition(node * &head, int d, int pos,node * &tail){
//     if(pos == 1){
//         insertAtHead(head,d);
//         return;
//     }
//     node* NodeToInsert = new node(d); 
//     node* temp  =head;
//     for(int i = 1;i<=pos -1;i++){
//         for
//         temp = temp->next;
//     }
//     if(temp->next == NULL){
//         insertAtTail(tail, d);
//         return;
//     }
//     NodeToInsert->next = temp->next; 
//     temp ->next = NodeToInsert; 
// }
// void deleteAtPos(node* &head, int pos){
//     node* temp  =head;
//     // 
//     if(pos == 1){
    
//         head = head->next;
//         delete temp;
//         return;
//     }
//     for(int i = 2;i<=pos-1;i++){
//         temp = temp->next; 
//     }
//     node* nodeDelete = temp->next;
//     temp->next = nodeDelete->next; 
// }
// for int j=0<ij{
//     forint j=0;

// }
// int main(){
//     node* head  = NULL;
//     for int j = 0;
    
//     node* tail = NULL;
//     // head = tail;
//     print(head);
//     node* n1 = new node(1);
//     head = n1;
//     tail = n1;
//     // cout<< head->data;
//     print(head);
//     insertAtHead(head, 5);
//     print(head);
//     insertAtHead(head, 7);
//     print(head);
//     insertAtTail(tail,9);
//     print(head);
//      cout<<"tail:"<<tail->data<<endl;
//     //normal insertion
//     insertAtPostition(head, 79,3,tail);
//     print(head);
//     // checking inserting start edge case
//     insertAtPostition(head, 4,1,tail);
//     print(head);
//     // checking inserting end edge case
//     insertAtPostition(head, 998,6,tail);
//     print(head);
//     //veriying above transaction
//     cout<<"head:"<<head->data<<endl;
    
//     cout<<"tail:"<<tail->data<<endl;

//     deleteAtPos(head,3);
//     cout<<"after deleting";
//     print(head);



//     return 0;
// }


// // doubly linked list

// #include<iostream>
// using namespace std;

// void insertAtHead(node* &head, int d){
//     node* temp = new node(d);
//     temp->next = head;
//     if(head!=NULL){
//         head->prev = temp;
//     }
//     head = temp;
// }

// void insertAtTail(node* &head, int d){
//     node * temp = new node(d);
//     node* n = head;
//     while(n->next!=NULL){
//         n = n->next;
//     }
//     for(int i=0;i<n;i++){
//         n = n->next;
//     }

//     n->next = temp;
//     temp->prev = n;


// }

#include<iostream>
using namespace std;

class node {
    public:
    int data;
    node* next;
    node(int d){
        this->data = d;
        this-> next = NULL; 
    }
};


void insertAtHead(node* &head, int d){
    cout<<"\nInsertAtHead called\n";
    node* temp = new node(d);
    temp->next = head;
    head = temp;

}
void print(node* &head){

    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp= temp->next;

    }
    cout<<endl;
}


void printAddress(node* &head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->next<<" ";
        temp= temp->next;

    }
    cout<<endl;
}

void insertAtTail(node* &head, int d){
        cout<<"\nInsertAtTail called\n";

    node* temp = head;
    node* newNode= new node(d);
    if(head == NULL){
        head = newNode;
        delete temp;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;

    }
    temp->next = newNode;
}

void insertAtMid(node* &head, int d, int pos){
    cout<<"\nInsertAtPosition called at position "<<pos<<endl; 

    if(pos == 1){
        insertAtHead(head,d);
        return;
    }
    node* temp = head;
    node* newNode = new node(d);
    for(int i = 2;i<=pos-1;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next= newNode;
}

void deleteAtHead(node* &head){
        cout<<"\nDeleteAtHead called\n";

    head = head->next;
    
}

void deleteAtTail(node* &head){
        cout<<"\nDeleteAtTail called\n";

    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        deleteAtHead(head);
        return;

    }
   node* temp = head;
   while(temp->next->next!=NULL){
    temp = temp -> next;

   }
   temp->next = NULL;
   
}

void deleteAtPos(node* &head, int pos){
    cout<<"\nDeleteAtPosition called at position "<<pos<<endl;
    node* prev = head;
    if(pos ==1){
        deleteAtHead(head);
        return;
    }
    for(int i = 2; i <= pos-1;i++){
        prev = prev->next;
    }
    prev->next = prev->next->next;
}
void reverse(node* &head, node* &current, node* &previous){
    
    if(current == NULL){
        head = previous;
        return;
    }
    if(current!= NULL){
        node* forward = current->next;
        reverse(head,forward,current); 
        current->next = previous;
    }
}

node* reverse1(node* &head){
    if(head == NULL || head->next == NULL){
        return head;

    }
    // node* chotaHead = reverse1(head->next);
    // head->next->next = head;
    // head->next = NULL;
    // return chotaHead;
    node* chotaHead = reverse1(head->next);
    head -> next -> next = head;
    head -> next = NULL;
    return chotaHead;
    

}
void reverseALinkedList(node* &head){
    node* prev = NULL;
    node* current  = head;
    reverse(head,current,prev);
    // node* forward = NULL;
    // while(current != NULL){
    //     forward = current->next;
    //     current->next = prev;
    //     prev = current;
    //     current = forward;
    //     // forward = current->next;

    // }
    // head = prev;


}


int main (){
    node* n1 = new node(5);
    node* head = NULL;

    head = n1;

    // print(head);
    insertAtHead(head, 46);
    // print(head);
    insertAtHead(head,79);

    // print(head);
    insertAtTail(head, 75);
    // print(head);
    
    

    insertAtMid(head,55,4);
    // printAddress(head);
    print(head);
    // printAddress(head);
    // deleteAtHead(head);
    // print(head);
    // printAddress(head);


    // deleteAtTail(head);
    // print(head);
    // printAddress(head);
    // deleteAtPos(head,2);
    reverseALinkedList(head);
    // printAddress(head);
    print(head);
    // node* prev = NULL;
    // printAddress(head);
    // // reverse(head,head,prev);
    head = reverse1(head);
     print(head);
     cout<<"head "<< head->data<<endl;
     printAddress(head);

    // printAddress(head);


    return 0;
}
