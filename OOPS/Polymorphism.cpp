#include<iostream>
using namespace std;

//compile time polymorphism or static 

//function overloading....
/*
class A{
    public:
    void sayHello(){
        cout<<"hello i m komal "<<endl;
    }
    //here function name is same bt signature is different
    void sayHello(string name){
        cout<<"helloooooo.."<<name<<endl;
    }
};
int main(){
    A obj;
    obj.sayHello();

    return 0;
}
//if we change void to int in second function then we can't overload error occurs
*/

//operator overloading
class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }
    void operator+ (B &obj){
        int value1=this->a;
        int value2=obj.a;
        cout<<"output "<<value2-value1<<endl;
    }
    void operator() (){
       cout<<"mai bracket hu "<<this->a<<endl; 
    }
};
int main(){
    B obj1,obj2;
    obj1.a=2;
    obj2.a=7;
    obj1+obj2;

    obj1();
}
 