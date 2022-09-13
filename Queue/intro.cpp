#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(21);
    q.push(24);
    q.push(45);

    cout<<"size of queue : "<<q.size()<<endl;
   // cout<<"rear at this time :"<<q.rear()<<endl;
    cout<<"front pointer : "<<q.front()<<endl;

    if(q.empty()){
        cout<<"queue is empty..."<<endl;
    }
    else{
        cout<<"not empty...."<<endl;
    }
}