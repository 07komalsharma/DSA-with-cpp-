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
Node* minVal(Node* root){
    Node* temp=root;

    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp=root;

    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

Node* deleteFromBST(Node* root,int val){
    //base case
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //1 child
        //1st case one child me left hai
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        //2nd case one child me right hai
        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        
        //2 child ********
        if(root->left!=NULL && root->right!=NULL){
           //min val nikalo
           int mini= minVal(root->right)->data;
           root->data=mini;
           root->right=deleteFromBST(root->right,mini);
           return root;
        }

    }
    else if(root->data > val){
        //left part me gye
       root->left=deleteFromBST(root->left,val);
       return root;
    }
    else{
        //right part
        root->right=deleteFromBST(root->right,val);
        return root;
    }


}
int main(){
   Node* root=NULL;
   
   cout<<"enter data in BST :"<<endl;
   takeInput(root);

   cout<<"printing data of tree : "<<endl;
   levelOrderTraversal(root);
   cout<<endl;
   
   Node* ans=minVal(root);
   cout<<"min value is : "<<ans->data<<endl;

   cout<<"max value is : "<<maxVal(root)->data<<endl;

   root=deleteFromBST(root,30);

   cout<<"printing data of tree : "<<endl;
   levelOrderTraversal(root);
   cout<<endl;
   return 0;
}