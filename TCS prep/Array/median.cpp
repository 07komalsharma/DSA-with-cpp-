#include<bits/stdc++.h>
using namespace std;

void median(int arr[],int n){
    sort(arr,arr+n);

    if(n%2==0){
        int ind1=n/2;
        int ind2=(n/2)-1;

        cout<<"median is : "<<(double)(arr[ind1]+arr[ind2])/2;
    }
    else{
        cout<<"median is : "<<arr[n/2];
    }
}
int main(){
    int arr[]={2,5,3,7,9,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    median(arr,n);

    return 0;
}
/*
 
Time Complexity: O(N*log N), Sorting of array

Space Complexity: O(1)


*/