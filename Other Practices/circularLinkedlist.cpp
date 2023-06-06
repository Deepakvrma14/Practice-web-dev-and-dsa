#include<iostream>
using namespace std;

class node{
    public :
    int data;
    node* next;
    node(int d){
        this->data = d;
        this->next = NULL;

    }

    ~node(){
        int value = this->data;
        if(this->next!=NULL){
            delete this->next;
        }
        cout<<"Deleting node with data "<<value<<endl;

    }
};

// circular linked list

void insertElement( node* &head, int element, int d){
    // insert element at dth position
    if(d==0){
        node* temp = new node(element);
        temp->next = head;
        head = temp;
        return;
    }

    node* temp = head;
    for(int i=0;i<d-1;i++){
        temp = temp->next;
    }
    node* NodeToBeInserted = new node(element);
    NodeToBeInserted->next= temp->next;
    temp->next = NodeToBeInserted;



}

void print(node* head){
    node* temp = head;
    while(temp->next!= head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    // cout<<endl;
    cout<<temp->data<<" ";
    cout<<endl;

}

void dlete

// void delete

int main(){
    node* head = NULL;
    insertElement(head,1,0);
    insertElement(head,79,1);
    insertElement(head,75,2);

    print(head);
    delete head;
    return 0;
}
