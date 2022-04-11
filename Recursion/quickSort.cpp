#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int pivot=arr[s];
    int count=0;

    for(int i=s+1;i<=e;i++){
        if(arr[i]<=pivot){
            count++;
        }
    }
    int pivotIndex=s+count;
    swap(arr[pivotIndex],arr[s]);

    //left right part sambhal lete hai
    int i=s,j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<pivot){                  //if already lesser value h left me
            i++;                 
        }
        while(arr[j]>pivot){                 //if already greater value hai right me
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
        }
    }
   
   return pivotIndex;

}

void quickSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    //partition
    int p = partition(arr,s,e);

    //recursive call
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    int arr[5]={3,1,4,5,2};
    int n=5;

    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}
