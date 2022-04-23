//Hierarchical--one class serve as parent class for more than 1 class
#include<iostream>
using namespace std;

//hierarchical inheritance
class A{
    public:
    void func1(){
        cout<<"inside function 1"<<endl;
    }
};
/*
class B: public A{
    public:
    void func2(){
        cout<<"inside function 2"<<endl;
    }
};

class C: public A{
    public:
    void func3(){
        cout<<"inside function 3"<<endl;
    }
};
*/
class D{
    public:
    void fun4(){
        cout<<"hello";
    }
};
class child1:public A{

};
class child2:public A,public D{   //hybrid

} ;

int main(){
    /*
    A object1;
    object1.func1();

    B object2;
    object2.func2();
    object2.func1();

    C object3;
    object3.func1(); 
    object3.func3();
    */
   A a1;
   a1.func1();

   child2 c2;
   c2.func1();
   c2.fun4();
   
    return 0;
}

//combination of more than 1 type of inheritance
// -hierarchical & multiple ->hybrid
