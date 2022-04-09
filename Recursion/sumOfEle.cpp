#include<iostream>
using namespace std;

int sum(int arr[],int n){
    if(n==0){
        return 0;
    }

    if(n==1){
        return arr[0];
    }

    int ans=sum(arr,n-1)+arr[n-1];
    return ans;

}

int main(){
    int arr[5]={3,2,5,1,6};
    int ans=sum(arr,5);
    cout<<endl;
    cout<<"sum is "<<ans<<endl;

    return 0;
}