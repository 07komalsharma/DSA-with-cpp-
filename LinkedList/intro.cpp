//Linked list-collection of node consists data & address of next node
//it is dynamic DS (grow/shrink at run time)->no memory wastage
//insertion /deletion-easy -no shift needed

/* types---
singlt ll
doubly ll
circular ll
circular doubly ll
*/

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
};
void InsertAtHead(Node* &head,int d){ //we want changes in original list so we take refrence here
    //new node create
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}
void InsertAtTail(Node* &tail,int d){
    //new node create
    Node* temp=new Node(d);
    tail->next=temp;
    tail=tail->next;
}
//insert in middle
void InsertAtPosition(Node* &tail,Node* &head,int position,int d){

    //insert at start... 
    if(position==1){
        InsertAtHead(head,d);
        return;
    }

    Node* temp= head;
    int cnt=1;

    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //inserting at last position...
    if(temp->next==NULL){
        InsertAtTail(tail,d);
        return;
    }
    //creating a node for data
    Node* nodetoInsert = new Node(d);
    nodetoInsert->next = temp->next;
    temp->next = nodetoInsert;


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
    Node* node1 = new Node(10);
   // cout<<node1->data<<endl;
   // cout<<node1->next<<endl;

    //head pointed to  node1
    Node* head=node1;
    Node* tail=node1;
    /*
    cout<<"insert at start..."<<endl;
    print(head);
    InsertAtHead(head,12);
    print(head);
    InsertAtHead(head,15);
    print(head);


*/
    cout<<"insert at end..."<<endl;
    print(head);
    InsertAtTail(tail,20);
    print(head);
    InsertAtTail(tail,40);
    print(head);

    InsertAtPosition(tail,head,4,55);
    print(head);

    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    return 0;
}
