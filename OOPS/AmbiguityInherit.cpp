#include<iostream>
using namespace std;

class A{
    public:
    void abc(){
        cout<<"i am A "<<endl;
    }
};

class B{
    public:
    void abc(){
        cout<<"i am B "<<endl;
    }
};

class C:public A,public B{

};
int main(){
    C obj;
    //obj.abc();

    obj.A::abc();
    obj.B::abc();
}