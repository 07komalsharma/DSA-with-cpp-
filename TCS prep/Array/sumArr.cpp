#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,3,4,7,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=(double)arr[i];
    }
    cout<<"Sum of all elements of array is : "<<sum;
    return 0;
}