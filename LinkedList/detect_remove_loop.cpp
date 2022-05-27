#include<iostream>
#include<map>
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

//logic ....
bool detectLoop(Node* head){
    if(head==NULL){
        return false;
    }
    map <Node*,bool> visited;
    Node* temp=head;

    while(temp!=NULL){
        if(visited[temp]==true){
            cout<<"present on element "<<temp->next<<endl;
        return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}

Node* Floyd_DetectLoop(Node*head){
    if(head==NULL)
    return NULL;

    Node* slow=head;
    Node* fast=head;

    while(slow!=NULL && fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
        if(slow==fast){
            return slow;
        }
    }
    return NULL;
}

//starting node of loop 
Node* getStartingNode(Node* head){
    if(head=NULL){
        return NULL;

    }
    Node* intersection=Floyd_DetectLoop(head);

    if(intersection==NULL){
        return NULL;
    }
    Node* slow =head;

    while(slow!= intersection){
        slow=slow->next;
        intersection=intersection->next;
    }
    return slow;
}

Node* removeLoop(Node* head){
    if(head==NULL)
    return NULL;

    Node* startOfLoop = getStartingNode(head);

    if(startOfLoop==NULL){
        return head;
    }

    Node* temp = startOfLoop;
    
    while(temp->next != startOfLoop){
        temp=temp->next;
    }
    temp->next=NULL;


}

int main(){ 

 Node* node1 = new Node(10);
    Node* head=node1;

Node * loopstart=getStartingNode(head);
cout<<"loop starts at"<<loopstart->data<<endl;


//print(head);
}
