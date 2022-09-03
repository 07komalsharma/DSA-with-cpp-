#include<bits/stdc++.h>
using namespace std;

class SpecialStack{
    //define data members..
    stack<int> s;
    int mini=INT_MAX;
    
    public:

    void push(int data){
        //for first element
        if(s.empty()){
            s.push(data);
            mini=data;
        }
        else{
            if(data<mini){
               int val=2*data-mini;
               s.push(val); 
               mini=data;  
               //or s.push(2*dat-mini)
            }
            else{
               s.push(data); 
            }

        }
    }

    int pop(){
        if(s.empty()){
            return -1;
        }
        int curr=s.top();
        s.pop();

        if(curr>mini){
            return curr;
        }
        else{
            int prevMin=mini;
            int val=2*mini-curr;
            mini=val;
            return prevMin;
        }
    }

    int top(){
        if(s.empty())
           return -1;

        int curr=s.top();
        if(curr<mini){
            return mini;
        }
        else{
            return curr;
        }
    }

    bool isEmpty(){
       return s.empty(); 
    }

    int getMin(){
        if(s.empty())
           return -1;

        return mini;   
    }

};


int main(){
return 0;
}