#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int data){
        this->data=data;
        this->next=NULL; 
    }
 
};
void InsertAtHead(Node* &head,int d){
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp; 
    tail=tail->next;
} 

void InsertAtPosition(Node* &head,int position,int d){
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    Node *temp=head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //creating a node d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next = nodeToInsert;
}

//iterative approach

/*
Node* Reverse(Node* head){
    Node* prev= NULL;
    Node* curr= head;
    Node* forward= NULL;

    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    return prev;

}
*/
//recursive approach
void reverse(Node* &head,Node* curr,Node* prev){
    if(curr==NULL){
    head=prev;
    return;
}

Node* forward=curr->next;
reverse(head,forward,curr);
curr->next=prev;

}
Node* reverselinkedlist(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
    reverse(head,curr,prev);
    return head;
    
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){

    //create new node
    Node* node1=new Node(3);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

   //head pointed to node1
   Node* head= node1;
   Node* tail= node1;
   InsertAtHead(head,12);
   InsertAtTail(tail,23); 
   InsertAtTail(tail,42);
   InsertAtPosition(head,4,44);  
   print(head);
   
   Node * reversehead = reverselinkedlist(head);
   print(reversehead);


    return 0;
}
