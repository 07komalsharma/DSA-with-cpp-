#include<bits/stdc++.h>
using namespace std;

int minSum(int arr1[],int arr2[],int n){

    sort(arr1,arr1+n);
    sort(arr2,arr2+n);

    int result=0;
    for(int i=0;i<n;i++){
        result=result+arr1[i]*arr2[n-i-1];
    }
    return result;
}


int main(){
   int arr1[]={6, 1, 9, 5, 4};
   int arr2[]={3, 4, 8, 2, 4};
   cout<<minSum(arr1,arr2,5)<<endl;

    return 0;
}