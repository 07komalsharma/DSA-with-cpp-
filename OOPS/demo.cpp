#include<iostream>
using namespace std;

//compile time polymorphism or static 

//function overloading....
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
    obj.sayHello("komal sharma");

    return 0;
}