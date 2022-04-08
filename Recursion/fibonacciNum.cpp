#include<iostream>
using namespace std;

int fib(int n){
    //base case
    if(n==0)
       return 0;
    if(n==1)
       return 1;   

    int ans= fib(n-1)+fib(n-2);

    return ans;
}

int main(){
    int n;
    cin>>n;

    int res=fib(n);
    cout<<res<<endl;

    return 0;
}