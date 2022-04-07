//agr big/complex problem ka solution same type ki choti problem pr depend krta h 
//then we use recursion to solve

//factorial    f(n) = n * f(n-1) 

#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    int choti=factorial(n-1);
    int bdi=n*choti;

    return bdi;
    //return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans<<endl;

    return 0;
}
//base case is very important..if missing then segmentation fault occurs
