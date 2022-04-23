#include<iostream>
using namespace std;

//Run time polymorphism or dynamic polymorphism
//method overriding
class Animal{
    public:
    void speak(){
        cout<<"speaking"<<endl;
    } 
};
class Dog : public Animal{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};
int main(){
    Dog d;
    d.speak(); //khud ki implementaion wali aayegi 
}