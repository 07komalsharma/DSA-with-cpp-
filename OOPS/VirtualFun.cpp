#include<iostream>
using namespace std;

class A{
    public:
    
    virtual void show(){
        cout<<"Base Class ";

    }
};

class B:public A{
    public:
    void show(){
        cout<<"Derived Class ";
    }
};

int main(){
    A *bptr;
    B obj;
    bptr=&obj;
    bptr->show();

    return 0;

}