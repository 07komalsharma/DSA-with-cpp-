#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1,0,1,0,14,0,5,0};
    // output : 0,0,0,0,1,1,14,5
    int n=sizeof(arr)/sizeof(arr[0]);
    int a[n];
    int i;
    int count=0;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            a[count++]=0;
        }
    }
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            a[count++]=arr[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}