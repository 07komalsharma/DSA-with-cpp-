#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void moveZeros(int nums[],int n){
    int i=0;
    for(int j=0;j<n;j++){
        if(nums[j]!=0){
            swap(nums[j],nums[i]);
            i++;
        }
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int arr[6]={1,0,0,0,4,2};
    moveZeros(arr,6);
    cout<<" array are : ";
    display(arr,6);
}