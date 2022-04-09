#include<iostream>
using namespace std;

int binsearch(int *arr,int s,int e,int k){
    if(s>e){
        return -1;
    }
    int mid=s+(e-s)/2;

    if(arr[mid]==k){
        return mid;
    }
    if(arr[mid]<k){
        return binsearch(arr,mid+1,e,k);   //right part
    }
    else{
        return binsearch(arr,s,mid-1,k);  //left part
    }
}

int main(){
    int arr[6]={3,4,5,8,9,12};
    int size=6;
    int key=4;

    int ans=binsearch(arr,0,5,key);
    cout<<"found at index "<<ans<<endl;
    return 0;

}