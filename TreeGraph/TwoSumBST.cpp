#include<bits/stdc++.h>
using namespace std;
template<class T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
    
};
//the sum of the nodes with values 2 and 12 equals the target value 20

void inorder(BinaryTreeNode<int>* root,vector<int> &in){
    if(root==NULL){
        return;
    }
    inorder(root->left,in); //left
    in.push_back(root->data);//node
    inorder(root->right,in);//right
    
    
}

bool twoSumInBST(BinaryTreeNode<int>* root, int target) {
	//Write your code here
    vector<int> inorderVal;
    inorder(root,inorderVal);
    
    int i=0 , j=inorderVal.size()-1;
    while(i<j){
        int sum=inorderVal[i]+inorderVal[j];
        
        if(sum==target){
            return true;
        }
        else if(sum>target){
            j--;
        }
        else{
            i++;
        }
    }
   return false;
}