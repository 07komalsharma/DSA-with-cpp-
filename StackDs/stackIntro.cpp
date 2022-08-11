#include<iostream>
#include<stack>

using namespace std;

int main(){

//creation of stack
 stack<int> s;

 //push element
 s.push(2);
 s.push(4);

 //pop operation
 s.pop();

 cout<<"printing top element : "<<s.top()<<endl;

 if(s.empty()){
    cout<<"stack is empty"<<endl;
 }
 else{
    cout<<"stack is not empty"<<endl;
 }

 return 0;

}