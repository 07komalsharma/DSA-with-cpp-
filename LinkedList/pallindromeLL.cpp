#include<bits/stdc++.h>
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
bool checkPallindrome(vector<int> arr){
     int n = arr.size();
     int s = 0;
     int e = n-1;
     while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        s++;
        e--;
     }
     return 1;
}
 bool isPallidrome(Node* head){
    vector<int> arr;
    Node* temp=head;
    while(temp!=NULL){
        arr.push_back(temp->data);
        temp=temp->next;
    }
     return checkPallindrome(arr);
 }
int main(){
    int n,l;
    cin>>n;
    Node* node1 = new Node(1);
    Node* tail=node1;
     Node* head=node1;
     for(int i=1;i<n;i++){
       cin>>l;
       tail->next=new Node(l);
       tail = tail->next;
     }
     /*InsertAtTail(tail,2);
     InsertAtTail(tail,3);
     InsertAtTail(tail,4);
    // InsertAtTail(tail,8);
    // InsertAtTail(tail,9);
     //InsertAtTail(tail,1);
     */
     print(head);
    
    cout<<isPallidrome(head)<<endl;
}