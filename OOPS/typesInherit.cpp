/*  Types of inheritance....

1) Single inheritance

2) Multilevel inheritance

3) Multiple inheritance

4) Hierarchical inheritance

5) Hybrid inheritance

*/


#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking....."<<endl;
    }
};

class Dog: public Animal{  //single inheritance

};

class GermanShepherd:public Dog{    //multi-level inheritance

};

class Human {
    public:
    string color;
    void speak(){
       cout<<"Speaking....."<<endl;
    }
};
class Hybrid: public Animal,public Human{  //multiple inheritance

  };



int main(){
    Dog d;
    d.bark();
    cout<<d.age<<endl;

    GermanShepherd g;
    g.bark();

    Hybrid obj1;
    obj1.speak();
    obj1.bark(); 

    return 0;
}
