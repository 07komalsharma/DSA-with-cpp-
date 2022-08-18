#include<bits/stdc++.h>
using namespace std;

bool subsetSum(int arr[],int sum,int n){
    //initialisation
    bool t[n+1][sum+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(i==0)
             t[i][j]=false;

            if(j==0)
             t[i][j]==true; 
        }
    }

    t[0][0]=true;

        for(int i=1;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(arr[i-1]<=j){
                t[i][j] = (t[i-1][j-arr[i-1]]) || (t[i-1][j]);
            } 
            else{
                t[i][j]=t[i-1][j];
            }
        }
    }
    return t[n][sum];

}

int main(){
    int arr[]={ 7, 3, 2, 5, 8 };
    int sum=18;
    int n=sizeof(arr)/sizeof(arr[0]);

    cout<<"present or not : " <<subsetSum(arr,sum,n)<<endl;

return 0;
}
///.............