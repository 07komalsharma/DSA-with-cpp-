#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){//memory free
          delete next;
          this->next=NULL;
        }
        cout<<"memory free for node with data : "<<value<<endl;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp=new Node(d);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp=new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtPosition(Node* &tail,Node* &head,int pos,int d){
    //at start
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    //at mid
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1){   //traverse
        temp=temp->next;
        cnt++;
    }
    //create node for d
    Node* nodeToInsert=new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;

    //at last
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }

}


void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(Node* &head,int pos){
    //first
    if(pos==1){
        Node*temp=head;
        head=temp->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    //last and mid deletion
    else{
        Node*curr=head;
        Node*prev=NULL;

        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

int main(){
    Node* node1=new Node(10);
   // cout<<node1->data<<" ";
    Node* head=node1;
    Node* tail=node1;
    print(head); 

   insertAtHead(head,12);
   insertAtHead(head,20);
   print(head);

    insertAtTail(tail,22);
    insertAtTail(tail,29);
    print(head);

    insertAtPosition(tail,head,6,18);
    print(head);
    
    deleteNode(head,1);
    print(head);
}
