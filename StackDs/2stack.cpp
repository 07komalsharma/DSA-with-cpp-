#include<iostream>
#include<stack>

using namespace std;

class Two_Stack{
    int *arr;
    int top1;
    int top2;
    int size;

    public:

    Two_Stack(int s){
        this->size=s;
        top1=-1;
        top2=s;
        arr = new int[s];
    }

    //push in stack1
    void push1(int num){
        //atleast empty space is pesent
        if(top2-top1>1){
            top1++;
            arr[top1]=num;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }

//push in stack2
    void push2(int num){
        if(top2-top1>1){
            top2--;
            arr[top2]=num;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }

    }

    //pop from stack 1 and return popped element
    int pop1(){
        if(top1>=0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

//pop from stack 2 and return popped element
    int pop1(){
        if(top2<size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
     
};

int main(){


return 0;
}