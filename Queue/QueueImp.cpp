#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
implementation of queue..
insert/push ->enqueue
dequeue / pop 
starting me front , rear = 0
if full kb hoga jb rear=n-1 pe else arr[rear]=element,rear++
if(empty)->return -1
 front=rear pop oprn
arr[front]=-1
front++;
aage chli gyi tb wo prev block rah gya
isliye wapis purane location pe dono ko krdenge
if(front==rear) front=0,rear=0 
*/

class Queue{
    int *arr;
    int frnt;
    int rear;
    int size;

    public:
    Queue(){
        size=100001;
        arr = new int[size];
        frnt=0;
        rear=0;

    }

    void enqueue(int data){
        if(rear==size)
          cout<<"queue is full "<<endl;
        else{
            arr[rear]=data;
            rear++;
        }  
    }

    int dequeue(){
       if(frnt==rear){
        return -1;
       }
        else{
            int ans=arr[frnt];
            arr[frnt]=-1;
            frnt++;
            if(frnt==rear){
                frnt=0;
                rear=0;
            }
        return ans;
       }
    } 

    int front(){
        if(frnt==rear){
            return -1;
        }
       else{
        return arr[frnt];
       } 
    }

    bool isEmpty(){
        if(frnt==rear){
           return true; 
        }
        else{
            return false;
        }
    }   
};
int main(){
    Queue q;

    q.enqueue(10);
    q.enqueue(23);
    cout<<q.front();
    if(q.isEmpty()){
        cout<<"queue empty.."<<endl;
    }
    else{
        cout<<"not empty.."<<endl;
    }
}
//time complexity of every above opeartion is O(1)

















