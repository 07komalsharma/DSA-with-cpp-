#include<bits/stdc++.h>
using namespace std;

void rvereseArray(int arr[], int start, int end)
{
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}    
 
 void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int calSumUtil(int a[],int b[],int n,int m){
       int sum[n];
 
    int i = n - 1, j = m - 1, k = n - 1;
 
    int carry = 0;
   


}


int main(){
    int arr1[]={2,4,7,2};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[n];
    int m= sizeof(arr2) / sizeof(arr2[0]);

    int j=0;
 //perform reverse work
    for(int i=n-1;i>=0;i--){
        arr2[j]=arr1[i];
        j++;
    }
    
    cout << calSum(arr1, arr2, n, m) << endl;

 
}
