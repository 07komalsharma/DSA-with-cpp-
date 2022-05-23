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

void InsertAtTail(Node* &tail,int d){
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

Node* kReverse(Node* &head,int k){
    //base case
if(head==NULL){
    return NULL;
}

//step 1
Node* next=NULL;
Node* curr=head;
Node* prev=NULL;
int count=0;

while(curr!=NULL && count<k){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
    count++;
}
//step 2 recursion dekh lega aage ka
if(next!=NULL){
  head->next=kReverse(next,k);  
}
return prev;
}

int main(){

    //create new node
    Node* node1=new Node(1);
   //head pointed to node1
   Node* head= node1;
   Node* tail= node1;

   InsertAtTail(tail,2); 
   InsertAtTail(tail,3);
   InsertAtTail(tail,4);
   InsertAtTail(tail,5);
   InsertAtTail(tail,6);
    cout<<"given LL : "<<endl;
    print(head);
    Node * ans = kReverse(head,2);
    cout<<"after k group reverse : "<<endl;
    print(ans);


}