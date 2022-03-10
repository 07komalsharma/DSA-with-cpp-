#include<iostream>
using namespace std;

int main(){

    int a=12;
    int *p=&a;
    int **q=&p;

//values.....
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**q<<endl;

//address
cout<<&a<<endl;
cout<<&p<<endl;
cout<<p<<endl;
cout<<&q<<endl;
cout<<*q<<endl;
cout<<&(*q)<<endl;


return 0;
}