#include<bits/stdc++.h>
using namespace std;

//approach-1

void findReapeating(int arr[],int n){
    int cnt=0;
    int dup[n];
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]) dup[cnt++]=arr[i];
        }
        }
    
    cout<<"the repaeting element are :"<<endl;
    for(int i=0;i<cnt;i++){
        if(dup[i]!=dup[i+1])
        cout<<dup[i]<<" ";
    }
}
int main(){
    int arr[]={1,1,2,2,2,3,4,4};
    findReapeating(arr,8);

}