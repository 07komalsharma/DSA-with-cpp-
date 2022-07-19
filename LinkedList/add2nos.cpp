#include<bits/stdc++.h>
using namespace std;

/*linked list node*/
struct Node{
    int data;
    struct Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
struct Node* buildList(int size){
    int val;
    cin>>val;

    Node* head=new Node(val);
    Node* tail=head;

    for(int i=0;i<size-1;i++){
        cin>>val;
        tail->next=new Node(val);
        tail=tail->next;
    }
    return head;
}

void print(Node* n){
    while(n){
        cout<<n->data<<" ";
        n=n->next;
    }
    cout<<endl;
}

class Solution
{
    private:
    Node* reverse(Node* head){
        Node* curr=head;
        Node* prev=NULL:
        Node* next =NULL;

        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    void insertAtTail(struct Node* &head,struct Node* &tail,int val){
        Node* temp=new Node(val);
        if(head==NULL){
            head=temp;
            tail=temp;
            return;

        }
        else{
           tail->next=temp;
           tail->temp 
        }
    }
    struct Node* add(struct* first,struct Node* second){
        int carry=0;

        Node* ansHead = NULL;
        Node* ansTail = NULL;


        while(first!=NULL || second!=NULL || carry!=0){
            int val1=0;
            if(first!=NULL)
              val1=first->data;

            int val2=0;
            if(second!=NULL)
              val2=second->data;  
            
            int sum=carry+val1+val2;
            int digit=sum%10;

           //create node and add to answer...
            insertAtTail(ansHead,ansTail,digit);
            carry=sum/10;
            if(first!=NULL)
              first=first->next;
            if(second!=NULL)  
               second=second->next;
        }

    }
    public:
    struct Node* addTwoLists(struct Node* first,struct Node* second){
       //step 1 reverse ll
        first=reverse(first);
        second=reverse(second); 
        //step 2 add 2 ll  
        Node* ans=add(first,second);

        //step 3 reverse ans
        ans=reverse(ans);

    
    return ans;
    }
};


int main(){

}