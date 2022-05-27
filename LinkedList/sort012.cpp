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


//////----2nd approach----///////

void Insert(Node* &tail,Node* curr){
    tail->next=curr;
    tail=curr;
}

Node* sortList(Node* head){
    Node* zeroHead =new Node(-1);
    Node* zeroTail =zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;

    while(curr!=NULL){
        int value = curr->data;

        if(value==0){
            Insert(zeroTail,curr);
        }
        else if(value==1){
            Insert(oneTail,curr);
        }
        else if(value==2){
            Insert(twoTail,curr);

        }
        curr=curr->next;
    }
   //merge 3 sublist....

   if(oneHead->next!=NULL){
       zeroTail->next = oneHead->next;
   }
   //1's ka list empty hai
   else{
       zeroTail->next = twoHead->next;
   }
   oneTail->next = twoHead->next;
   twoTail->next = NULL;
  
  //setup head
  head = zeroHead->next;

  //delete dummy node
  delete(zeroHead);
  delete(oneHead);
  delete(twoHead);


return head;
}

int main(){
    Node* node1 = new Node(1);
    Node* head=node1;
    Node* tail=node1;

    InsertAtTail(tail,0);
    InsertAtTail(tail,2);
    InsertAtTail(tail,1);
    InsertAtTail(tail,2);
    InsertAtTail(tail,0);

    print(head);

    Node * ans = sortList(head);
    print(ans);
}