#include<iostream>
using namespace std;

//gcd->greatest common factor..........

int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return b;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}
int main(){
    int a,b;
    cout<<"enter a & b"<<endl;
    cin>>a>>b;

    cout<<gcd(a,b)<<endl;

    return 0;
}