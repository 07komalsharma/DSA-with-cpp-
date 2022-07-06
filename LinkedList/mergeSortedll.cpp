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

void InsertAtTail(Node* &tail1,int d){
    //new node create
    Node* temp=new Node(d);
    tail1->next=temp;
    tail1=tail1->next;
}
void InsertAtTail2(Node* &tail2,int d){
    //new node create
    Node* temp=new Node(d);
    tail2->next=temp;
    tail2=tail2->next;
}
void print(Node* &head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

Node* SortedMerge(Node* a, Node* b)
{
    Node* result = NULL;
     
    /* Base cases */
    if (a == NULL)
        return(b);
    else if (b == NULL)
        return(a);
     
    /* Pick either a or b, and recur */
    if (a->data <= b->data)
    {
        result = a;
        result->next = SortedMerge(a->next, b);
    }
    else
    {
        result = b;
        result->next = SortedMerge(a, b->next);
    }
    return(result);
}

int main(){
    Node* node1 = new Node(1);
    Node* tail1 = node1;
    Node* a = node1;

    InsertAtTail(tail1,3);
    InsertAtTail(tail1,5);

    Node* node2=new Node(2);
    Node* tail2 = node2;
    Node* b = node2;

    InsertAtTail2(tail2,4);
    InsertAtTail2(tail2,5);

    print(a);
    print(b);
    Node * ans = SortedMerge(a,b);
    print(ans);
}