#include<iostream>
using namespace std;

void print(int arr[],int s,int e){
    for(int i=s;i<=e;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool BinarySearch(int *arr,int s,int e,int k){
    cout<<endl;
    print(arr,s,e);
    //base case
    //element not found
    if(s>e){
        return false;
    }

    int mid=s+(e-s)/2;
    cout<<"value of mid is "<<arr[mid]<<endl;

    //element found
    if(arr[mid]==k){
        return true;
    }
    

    if(arr[mid]<k){
        return BinarySearch(arr,mid+1,e,k);   //right part
    }
    else{
        return BinarySearch(arr,s,mid-1,k);  //left part
    }
}

int main(){
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=18;

    cout<<"present or not  "<<BinarySearch(arr,0,5,key)<<endl;

    return 0;
}
//ye toh bool value return kiya hai...