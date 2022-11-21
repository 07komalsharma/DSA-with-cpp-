#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=5;
    int arr[n]={-2,-3,-1,-4,-5};

    int temp=0,ans=0,mini=arr[0];

    for(int i=0;i<n;i++){
        temp+=arr[i];

        if(temp>ans){
            ans=temp;
        }
        if(mini<arr[i]){
            mini=arr[i];
        }
        if(temp<0){
            temp=0; 
        }
    }
    if(ans==0){
        cout<<mini;
        return 0;
    }
    cout<<ans;
}