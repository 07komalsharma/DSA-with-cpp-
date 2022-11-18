#include<iostream>
using namespace std;

//zero subarray sum
int main(){
    int arr[]={4,2,4,1,6};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        int result=arr[i];
        if(result==0){
            cout<<"zero sum is possible";
            return 0;
        }
        for(int j=i+1;j<n;j++){
            result+=arr[j];

            if(result==0){
                cout<<"zero sum Possible";
                return 0;
            }
        }
    }
    cout<<"Zero sum Not Possible";
    return 0;
}