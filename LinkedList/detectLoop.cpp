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

int main(){

}
