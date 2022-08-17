#include<bits/stdc++.h>
using namespace std;

bool knows(vector<vector<int> >&M,int a,int b,int n){
     if(M[a][b]==1)
        return true;
     else
        return false;   
}

int celebrity(vector<vector<int> >&M,int n){
    stack<int> s;
    //step:1 push all the elements in stack

    for(int i=0;i<n;i++){
        s.push(i);
    }

    //step: 2 get elements and compare them
    while(s.size()>1){
        int a=s.top();
        s.pop();

        int b=s.top();
        s.pop();

        if(knows(M,a,b,n)){
            s.push(b);
        }
       else{
        s.push(a);
       }
    }
    //step3: single element in stack is potential celeb 
    //so verify it

   int ans=s.top(); //the potential candidate

    
    int zerocount=0;
    for(int i=0;i<n;i++){
        if(M[ans][i]==0){
            zerocount++;
        }
    }
    //all zeros
    if(zerocount !=n)
       return -1;
    
    
    //column check

    int oneCount=0;

    for(int i=0;i<n;i++){
        if(M[i][ans]==1)
        oneCount++;
    }
//all one except diagonal
    if(oneCount != n-1){
        return -1;
    }

   return ans;

}