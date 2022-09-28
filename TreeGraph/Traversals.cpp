#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
//ZIG ZAG pattern print...
// approach : left to right then right to left level wise print
vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	vector<int> result;
    	if(root==NULL){
    	    return result;
    	}
    	queue<Node*> q;
    	q.push(root);
    	
    	bool leftToRight=true; //current ans aapka kis movement ke karan hua h if this true then
        //iske child ko right to left me daalenge next step me
    	
    
    	while(!q.empty()){
    	    	int size=q.size();
    	    //har level ko process kro
    	    vector<int> ans(size);
    	    for(int i=0;i<size;i++){
    	        Node* frontNode=q.front();
    	        q.pop();
    	    
    	    //normal insert or reverse insert........
    	    int index=leftToRight ? i : size-i-1;
    	    ans[index]=frontNode->data;
    	    
    	    if(frontNode->left){
    	        q.push(frontNode->left);
    	    }
    	    if(frontNode->right){
    	        q.push(frontNode->right);
    	    }
    	    }
    	    //direction change
    	    leftToRight=!leftToRight;
    	    
    	    for(auto i:ans){
    	        result.push_back(i);
    	    }
    	    
    	}
    	return result;
    }


//boundary traversal...........

	 void traverseLeft(Node* root,vector<int> &ans){
        if(root==NULL || (root->left==NULL && root->right==NULL)){
            return;
        }
        ans.push_back(root->data);
        if(root->left){
            traverseLeft(root->left,ans);
        }
        else{
            traverseLeft(root->right,ans);
        }
    }
    void traverseLeaf(Node* root,vector<int> &ans){
        //base condition...
        if(root==NULL){
            return;
        }
        if(root->left==NULL && root->right==NULL){
            ans.push_back(root->data);
            
        }
        traverseLeaf(root->left,ans);
        traverseLeaf(root->right,ans);
        
    }
    void traverseRight(Node* root,vector<int> &ans){
        if((root==NULL)||(root->left==NULL && root->right==NULL)){
            return;
        }
        if(root->right){
            traverseRight(root->right,ans);
        }
        else{
            traverseRight(root->left,ans);
        }
        
        ans.push_back(root->data);
    }
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL){
            return ans;
        }
        ans.push_back(root->data);
        
        traverseLeft(root->left,ans);
        traverseLeaf(root->left,ans); //left leaf..
         traverseLeaf(root->right,ans); //right leaf..
        traverseRight(root->right,ans);
        
        return ans;
        
    }