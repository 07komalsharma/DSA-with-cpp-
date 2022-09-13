#include<iostream>
using namespace std;

class CircularQueue{
    int *arr;
    int frnt;
    int rear;
    int size;

    public:
    //initialize your data structure

    CircularQueue(int n){
        size=n;
        arr=new int[size];
        frnt=rear=-1;
    }
    bool enqueue(int value){
        if((frnt==0 && rear==size-1)||(rear==(frnt-1)%(size-1))){
           // cout<<"Queue is full ";
            return false;
        }
        else if(frnt==-1){
            frnt=rear=0;
        }
        else if(rear==size-1 && frnt!=0){
            rear=0; 
        }
        else{
            rear++;
        }
        arr[rear]=value;
        return true;
    }

    int dequeue(){
        if(frnt==-1){
            //  cout<<"queue is empty "<<endl;
            return -1;
        }
        int ans=arr[frnt];
        arr[frnt]=-1;
        if(frnt==rear){  //single element is present
            frnt=rear=-1;
        }
        else if(frnt==size-1){
            frnt=0;  //to maintain cyclic nature
        }
        else{
            frnt++;
        }
        return ans;
    }

};
int main(){

return 0;
}