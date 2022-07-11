#include<bits/stdc++.h>
using namespace std;

void print(int arr[],int n){
    cout<<"Reversed array is : "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void reverse(int arr[],int n){
    int s =0;
    int e =n-1;
    while(s<e){
    swap(arr[s],arr[e]);
    s++;
    e--;
    }
    print(arr,n);
}

int main(){
    int arr[]={2,3,4,5,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    reverse(arr,n);

    return 0;

}
/*
//Reverse array using library function
void reverseArray(int arr[], int n) {
   //Reversing elements from index 0 to n-1 
   reverse(arr, arr + n);
}
*/