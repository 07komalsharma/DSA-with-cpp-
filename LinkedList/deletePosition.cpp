#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

     //constructor
     Node(int data){
      this->data=data;
      this->next=NULL;
  }
    //destructor
    ~Node(){
        int value=this->data;
        //memory free
        if(this->next != NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void InsertAtTail(Node* &tail,int d){
    //new node create
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}



void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



void deleteNode(int position,Node* tail, Node* &head){
    //deleting first or last node
    if(position==1){
        Node* temp=head;
        head=temp->next;
        //memory free start node
        temp->next=NULL;
        delete temp;

    }
    //deleting any middle or last node
    else{
        Node* curr=head;
        Node* prev=NULL;

        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    
    }
    
}

int main(){
    Node* node1 = new Node(10);
    Node* head=node1;
    Node* tail=node1;

    cout<<"insert at end..."<<endl;
    InsertAtTail(tail,20);
    InsertAtTail(tail,30);
    InsertAtTail(tail,40);
    InsertAtTail(tail,50);
    InsertAtTail(tail,60);
    print(head);

    deleteNode(1,tail,head);
    print(head);
    print(tail);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}