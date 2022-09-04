#include <bits/stdc++.h>
using namespace std;

class B;
class A{
    int a;
    public:
    
    void input(){
        cout<<"\n Enter number ";
        cin>>a;
    }
    friend void Max(A,B);
};

class B{
    int b;
    public:
    void getdata(){
        cout<<"\n Enter number :";
        cin>>b;
    }
    friend void Max(A,B);

};

void Max(A aa,B bb){
    if(aa.a>bb.b){
        cout<<"Max = "<<aa.a;
    }
    else{
        cout<<"\n Max = "<<bb.b;
    }
}
int main(){
    A aa;
    B bb;
    aa.input();
    bb.getdata();

    Max(aa,bb);
}