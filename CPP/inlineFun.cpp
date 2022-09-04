#include<iostream>
using namespace std;

//inline function

inline int Square(int a){
    return (a*a);
}

inline int Cube(int a){
    return (a*a*a);
}

int main(){
    cout<<" Square is "<<Square(5)<<endl;
    cout<<" Cube is "<<Cube(5);

    return 0;
}