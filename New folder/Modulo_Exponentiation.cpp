#include<iostream>
using namespace std;

int moduloexpo(int x,int n,int m){
    int res=1;

    while(n>0){
        if(n&1){
            //odd
            res=((res)*(x)%m)%m;
        }
        x=((x)%m*(x)%m)%m;
        n=n>>1;               //divide by 2...
    }
    return res;
}

int main(){

    cout<<moduloexpo(12,3,8)<<endl;

    return 0;
}
/*

First off, some important identities about the modulo operator:

(a mod m)+(b mod m)  mod m=a+b  mod m

(a mod m)−(b mod m)  mod m=a−b  mod m

(a mod m)⋅(b mod m)  mod m=a⋅b  mod m


*/