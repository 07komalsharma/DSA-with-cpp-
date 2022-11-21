/*
given array integers return sum of maximum 4 elements or
if no of elements is < 4 in array then return sum of all elements

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,5,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;

    if(n<4){
        for(int i=0;i<n;i++){
           sum+=arr[i];

           cout<<sum;
           return 0;
        }
    }
    else{
        sort(arr,arr+n);
        sum=arr[n-1]+arr[n-2]+arr[n-3]+arr[n-4];
        cout<<sum;
    }
    return 0;
}