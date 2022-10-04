#include<iostream>
using namespace std;
/*

swap three numbers without using any variable like 
A=10  A=30
B=20  B=10
C=30  C=20

A=A+B+C=60
B=A-(B+C)=10 
C=A-(B+C)=10
*/
int main(){

 int a=10,b=20,c=30;
 cout<<"before swapping.."<<"a"<<"="<<a<<endl;
 cout<<"before swapping.."<<"b"<<"="<<b<<endl;
 cout<<"before swapping.."<<"c"<<"="<<c<<endl;
 
 a=a+b+c;
 b=a-(b+c);
 c=a-(b+c);
 a=a-(b+c);

 cout<<"after swapping.."<<"a"<<"="<<a<<endl;
 cout<<"after swapping.."<<"b"<<"="<<b<<endl;;
 cout<<"after swapping.."<<"c"<<"="<<c<<endl;


    return 0;
}