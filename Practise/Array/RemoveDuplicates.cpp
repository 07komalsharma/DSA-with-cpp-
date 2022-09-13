#include<bits/stdc++.h>
using namespace std;

int RemoveDuplicates(int arr[]){

    //As we know HashSet only stores unique elements.

    set<int> set;
    for(int i=0;i<7;i++){
        set.insert(arr[i]); //Put every element of the array in the set.
    }
    int k=set.size(); //Store size of the set in a variable K.
    int j=0;

    for(int x: set){
        arr[j++]=x;
    }

    return k;

}

int main(){
    int arr[]={1,1,2,2,2,3,3};
    int k=RemoveDuplicates(arr);

    cout<<"the array after removing duplicate element is "<<endl;
    for(int i=0;i<k;i++){
        cout<<arr[i]<<" ";
    }
}
/*
int removeduplicates(int arr[]){
    int i=0;
    for(int j=1;j<7;j++){
        if(arr[i]!=arr[j]){
            i++;
            arr[i]=arr[j];
        }
    }
    return i+1;
}
*/
