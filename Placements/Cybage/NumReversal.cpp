#include<iostream>
using namespace std;

//number reversal
//2nd approach by recursion.........
void rev(int n){
    if(n==0){
        return;
    }
    cout<<n%10;
    rev(n/10);
}
int main(){
    int n=321;
/*
    while(n>0){
        cout<<n%10;
        n=n/10;
    }
*/
rev(n);

    return 0;
}
