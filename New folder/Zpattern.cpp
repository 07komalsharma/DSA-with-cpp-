#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //1st level star n times
    for(int i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;

    //2nd- (n-2)level

    for(int i=1;i<=n-2;i++){
        for(int j=1;j<=n-i-1;j++){
            cout<<" ";
        }
        cout<<"*";
        cout<<endl;
    }


   //last level
    for(int i=0;i<n;i++){
        cout<<"*";
    }
}