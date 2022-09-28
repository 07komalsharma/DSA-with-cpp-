#include<iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    
    node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

node* buildTree(node*root){
    cout<<" enter data : "<<endl;
    int data;
    cin>>data;

    root = new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"enter data for inserting in left of "<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter data for inserting in right of"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}

void levelOrderTraversal(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp=q.front();
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

void inorder(node* root){
    if(root==NULL){
        return;
    }
    //LNR
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

void preorder(node* root){
    if(root==NULL){
        return; 
    }
    //NLR
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(node* root){
    if(root==NULL){
        return; 
    }
    //LRN
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

void buildFromLevelOrder(node* &root){
    queue<node*> q;
    cout<<"Enter data for root "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    q.push(root);

    while(!q.empty()){
        node* temp=q.front();
        q.pop();

        cout<<"Enter left node for : "<<root->data<<endl;
        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left=new node(leftData);
            q.push(temp->left);
        }

        cout<<"Enter right node for : "<<root->data<<endl;
        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp->right=new node(rightData);
            q.push(temp->right);
        }

    }
}

int main(){
    node* root=NULL;

    buildFromLevelOrder(root);
    levelOrderTraversal(root);
    //1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1
    //creating a tree
    /*
    root = buildTree(root);
    cout<<"printing the level order traversal i.e BFS : "<<endl;
    levelOrderTraversal(root);

    cout<<"Inorder Traversal are : "<<endl;
    inorder(root);

    cout<<endl<<"PreOrder traversal are : "<<endl;
    preorder(root);

    cout<<endl<<"PostOrder traversal are : "<<endl;
    postorder(root);

    return 0;
*/
}