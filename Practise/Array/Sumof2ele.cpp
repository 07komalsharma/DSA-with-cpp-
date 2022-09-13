//sum of two elements equal to third elemnts
//arr-2 " COUNT TRIPLETS........"

#include<iostream>
using namespace std;

int CountTriplet(int arr[],int n){
    int index[10000]={0};

    int count=0;
    for(int i=0;i<n;i++){
        index[arr[i]]=1;
    }

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(index[arr[i]+arr[j]]==1){
                count++;
            }
        }
    }
    return count;
}

int main(){
    int arr[]={1,5,3,2};
    int n=4;

    cout<<"total triplets are : "<<CountTriplet(arr,n)<<endl;
    return 0;
}

