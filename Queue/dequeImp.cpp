#include<iostream>
using namespace std;

class Deque{
    int *arr;
    int front;
    int rear;
    int size;

    public:
    
    Deque(int n){
        size=n;
        arr=new int[n];
        front=-1;
        rear=-1;       
    }
    bool pushFront(int x){
        //check full or not //sec con : rear front ke ek piche hoti h
        if((front==0 && rear==size-1)||(front!=0 &&  rear==(front-1)%(size-1))){
           return false; 
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(front==0 && rear!=size-1){
            front=size-1;
        }
        else{
            front--; 
        }
        arr[front]=x;
        return true;
    }
    bool pushRear(int x){
         if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){
           return false; 
        }
        else if(front==-1){
            front=rear=0;
        }
        else if(rear==size-1 && front!=0){
            rear=0;
        }
        else{
            rear++;
        }
        arr[rear]=x;
        return true;
    }
    int popRear(){
       if(front==-1){
            //  cout<<"queue is empty "<<endl;
            return -1;
        }
        int ans=arr[rear];
        arr[rear]=-1;
        if(front==rear){  //single element is present
            front=rear=-1;
        }
        else if(rear==0){
            rear=size-1;  //to maintain cyclic nature
        }
        else{
            rear--;
        }
        return ans;
    } 
    
    int getFront(){
        if(isEmpty()){
            return -1;
        }
        return arr[front];
    }

    int getRear(){
        if(isEmpty()){
            return -1;
        }
        return arr[rear];
    }
    bool isEmpty(){
        if(front==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isFull(){
        if((front==0 && rear==size-1)||(rear==(front-1)%(size-1))){
           return true; 
        }
        return false;
    }


};