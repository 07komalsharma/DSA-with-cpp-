#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node* temp=q.front();
       // cout<<temp->data<<" ";
        q.pop();

        if(temp==NULL){
            //purana level complete traverse hochuka h
            cout<<endl;
            if(!q.empty()){//queue still have some child nodes
                q.push(NULL);
            }
        }
        
        else{
            cout<<temp->data<<" ";
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
        }
    }
}
Node* insertIntoBST(Node* root,int d){
    //base case
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    //if inserting data is greater than root data
    if(d > root->data){
        root->right=insertIntoBST(root->right,d);
    }
    else{
        root->left=insertIntoBST(root->left,d);
    }
    return root;
}
void takeInput(Node* &root){
    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBST(root,data);
        cin>>data;
    }

}

int main(){
   Node* root=NULL;
   
   cout<<"enter data in BST :"<<endl;
   takeInput(root);

   cout<<"printing data of tree : "<<endl;
   levelOrderTraversal(root);


   return 0;
}