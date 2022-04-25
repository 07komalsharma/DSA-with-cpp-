//..DOUBLY LINKED LIST insert at,start,end,mid ,any position
#include<iostream>
using namespace std;

class Node{
   public:
   int data;
   Node* prev;
   Node* next;
   
   Node(int d){
       this->data=d;
       this->next=NULL;
       this->prev=NULL;
   }

   ~Node(){
       int val=this->data;
       if(next!=NULL){
           delete next;
           next=NULL;
       }
       cout<<"memory free for node with data "<<val<<endl;
   }
};

//traversing a linked list
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//getting length of linked list
int getLength(Node* head){
    int len=0;
    Node* temp=head;

    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &tail,Node* &head,int d){
    //empty list
    if(head == NULL) {
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
    Node* temp=new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
}
void insertAtTail(Node* &tail,Node* &head,int d){
    if(tail == NULL) {
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        Node* temp=new Node(d);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
}

void insertAtPosition(Node* &tail,Node* &head,int position,int d){
    //insert at start..
    if(position==1){
        insertAtHead(tail,head,d);
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
        insertAtTail(tail,head,d);
        return;
    }
    //creating a node for data
    Node* nodetoInsert = new Node(d);

    nodetoInsert->next = temp->next;
    temp->next->prev = nodetoInsert;
    temp->next=nodetoInsert;
    nodetoInsert->prev=temp;

}

void deleteNode(int position,Node* &tail, Node* &head){
    //deleting first or last node
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        //memory free start node
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
        curr->prev=NULL;
        prev->next = curr->next;
        curr->next=NULL;
        delete curr;
    
    }
    
}


int main(){
    Node* node1 = new Node(10);

    Node* head=node1;
    Node* tail=node1;
    insertAtHead(tail,head, 11);
    print(head);

    insertAtTail(tail,head, 25);
    print(head);

    insertAtPosition(tail, head, 1, 101);
    print(head);

    insertAtPosition(tail, head, 5, 108);
    print(head);

   // cout << "head  " << head -> data << endl;
    //cout << "tail  " << tail -> data << endl;

    deleteNode(3,tail,head);
    print(head);

     cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;


    cout<<"length is : "<<getLength(head)<<endl;
    return 0;
}