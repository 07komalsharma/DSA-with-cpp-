#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>& s,int x){
    //base case
    if(s.empty()){
        s.push(x);
        return ;
    }

    int num = s.top();
    s.pop();

    //recursive call
    solve(s,x);
    
    s.push(num);

}

stack<int> pushAtBottom(stack<int>& myStack,int x){
    solve(myStack,x);
    return myStack;
}

int main(){
    stack<int> S;
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);
 
   pushAtBottom(S,10);
    
}