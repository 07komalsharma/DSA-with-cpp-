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

Node* uniqueSortedList(Node* head){
    if(head==NULL){
        return NULL;
    }
    Node* curr=head;
    while(curr!=NULL){
        if(curr->next!=NULL && curr->data==curr->next->data){
            Node* next_next=curr->next->next;
            Node* nodetodelete=curr->next;
            delete(nodetodelete);
            curr->next=next_next;
        }
        else{
            curr=curr->next;
        }
    }
    return head;

}
int main(){
    Node* node1 = new Node(12);
        Node* head=node1;
    Node* tail=node1;

    InsertAtTail(tail,15);
    InsertAtTail(tail,15);
    InsertAtTail(tail,16);
    InsertAtTail(tail,16);
    InsertAtTail(tail,20);

    print(head);

    Node * ans = uniqueSortedList(head);
    print(ans);


}