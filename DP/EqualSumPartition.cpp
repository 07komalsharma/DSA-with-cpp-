#include<bits/stdc++.h>
using namespace std;

int IsSubsetSum(int arr[],int sum,int n){
    bool t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)
             t[i][j]=false;

            if(j==0)
             t[i][j]==true; 
        }
    }

    t[0][0]=true;

        for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j] = (t[i-1][j-arr[i-1]]) || (t[i-1][j]);
            } 
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];
}

bool findPartition(int arr[],int n){

    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    if(sum%2!=0){
        return false;
    }
    else{
        return IsSubsetSum(arr,sum/2,n);
    }

    return true;
}

int main(){
    int arr[]={1, 5, 3};
    int n=sizeof(arr)/sizeof(arr[0]);

    //function call
    if(findPartition(arr,n)==true){
        cout<<"Can be divided into subset of equal sum"<<endl;
    }
    else{
        cout<<"Can't divided into equal sum partition"<<endl;
    }

    return 0;
}