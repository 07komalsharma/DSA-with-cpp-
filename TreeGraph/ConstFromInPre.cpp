#include<bits/stdc++.h>
using namespace std;
struct Node
{
  int data;
  Node* left;
  Node* right;
  Node(int x){
    data=x;
    left=NULL;
    right=NULL;

  }
};
class solution{
    public:
    int findPosition(int in[],int element,int n){
        for(int i=0;i<n;i++){
            if(in[i]==element)
            return i;
        }
        return -1;
        
    }
    Node* solve(int in[],int pre[],int &index,int inorderStart,int inorderEnd,int n){
        //base case
        if(index>=n || inorderStart>inorderEnd){
            return NULL;
        }
        int element=pre[index++];
        Node* root=new Node(element);          //...........whyyy whyyy
        int position=findPosition(in,element,n);
        
        //recursive calls
        root->left=solve(in,pre,index,inorderStart,position-1,n);
        root->right=solve(in,pre,index,position+1,inorderEnd,n);
        
        return root;
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preOrderIndex=0;
        Node* ans=solve(in,pre,preOrderIndex,0,n-1,n);
        return ans;
        
    }
};

//construct from postorder and inorder........
/*
Node* solve(int in[],int post[],int &index,int inorderStart,int inorderEnd,int n){
        //base case
        if(index<0 || inorderStart>inorderEnd){
            return NULL;
        }
        int element=post[index--];
        Node* root=new Node(element);
        int position=findPosition(in,element,n);
        
        //recursive calls
        root->right=solve(in,post,index,position+1,inorderEnd,n);
        root->left=solve(in,post,index,inorderStart,position-1,n);
        
        return root;
    }


//Function to return a tree created from postorder and inoreder traversals.
Node *buildTree(int in[], int post[], int n) {
    // Your code here
    int postOrderIndex=n-1;
        Node* ans=solve(in,post,postOrderIndex,0,n-1,n);
        return ans;
}
*/
int main(){
    return 0;
}