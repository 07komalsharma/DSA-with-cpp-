#include<iostream>
using namespace std;

void push(int x,int n){
    int stack[n];
    int top=-1;

    if(top==n-1){
        cout<<"overflow"<<endl;
    }
    else{
        top++;
        stack[top]=x;
    }
}
int main(){

    cout<<push(5,5);
    return 0;
}