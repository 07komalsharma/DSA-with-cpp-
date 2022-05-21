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
//approach 1
/*
int getLength(Node* head){
    int len=0;
    while(head!=NULL){
        len++;
        head=head->next;
    }
    return len;
}
Node* getmiddle(Node* &head){
    int len=getLength(head);
    int ans=len/2;
    
    Node* temp=head;
    int cnt=0;
    while(cnt<ans){
        temp=temp->next;
        cnt++;
    }
    return temp;
}
*/
//approach 2
Node* getmiddle(Node* &head){         //doubt........
    if(head==NULL || head->next==NULL){
       return head;;
    }
    //2 nodes are there
    if(head->next->next==NULL){
        return head->next;
    }
    Node* slow=head;
    Node* fast=head->next;
    while(fast!=NULL){
       fast=fast->next;
       if(fast!=NULL){
           fast=fast->next;
       } 
       slow=slow->next;
    } 
    return slow;
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
    Node* node1=new Node(1);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

   //head pointed to node1
   Node* head= node1;
   Node* tail= node1;

   InsertAtTail(tail,2); 
   InsertAtTail(tail,3);
   InsertAtTail(tail,4);
   InsertAtTail(tail,5);
   InsertAtTail(tail,6);
   //InsertAtTail(tail,42);

 
   print(head);
   
   Node * ans = getmiddle(head);
   cout<<ans->data<<endl;


    return 0;
}






