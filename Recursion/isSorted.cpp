#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
    if(size==0 || size==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart=isSorted(arr+1,size-1);
        return remainingPart;
    }

}

int main(){
    int arr[5]={3,4,2,1,0};
    bool ans=isSorted(arr,5);
    
    if(ans){
        cout<<"array is sorted"<<endl;
    }
    else{
        cout<<"array is not sorted"<<endl;
    }


    return 0;
}