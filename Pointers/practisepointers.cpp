#include<iostream>
using namespace std;

int main(){

/*
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


int a[20]={1,2,3,5};
cout<<"->"<<&a[0]<<endl;

int *p=&a[0];
cout<<"->"<<&p<<endl;
*/
int arr[10];
//error
  //arr=arr+1;
  
int *ptr=&arr[0];
cout<<ptr<<endl;
ptr=ptr+1;
cout<<ptr<<endl;


return 0;
}
 





