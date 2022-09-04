#include <bits/stdc++.h>
using namespace std;

class demo{
    int a,b;

    public:
    void getdata();
    friend int Sum(demo);
    
};

void demo :: getdata(){
    cout<<"enter two numbers : "<<endl;
    cin>>a>>b;
}

int Sum(demo aa){

    return (aa.a+aa.b);
}
int main(){
    demo aa;
    aa.getdata();
    cout<<"Addition"<<Sum(aa);

    return 0;
}