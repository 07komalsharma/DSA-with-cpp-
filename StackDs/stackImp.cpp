#include<iostream>
#include<stack>

using namespace std;

class Stack{
    //properties
    public:
    int *arr;
    int top;
    int size;

    //behaviour
    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top > 1){
            top++;
            arr[top]=element;

        }
        else{
            cout<<"Stack Overflow"<<endl;

        }

    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;

        }

    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }

    }
    bool isEmpty(){
        if(top== -1){
            return true;
        }
        else{
            return false;
        }

    }

    void DisplayStack(Stack s) {
         
        	Stack s1(5);
         
        	while (!s.isEmpty()) {
            	s1.push(s.peek());
             
            	// Print the elements
            	cout << (s1.peek()) << " ";
            	s.pop();
        }
    }
};

int main(){
    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(50);
    
    cout<<st.peek()<<endl;
    st.DisplayStack(st);
 
    return 0;
}