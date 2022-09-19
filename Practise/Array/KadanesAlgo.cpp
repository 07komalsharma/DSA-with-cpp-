#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        int arr[N];
        
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        
        long long lmax=arr[0],gmax=arr[0];

        for(int i=1;i<N;i++){
            if(arr[i]>(arr[i]+lmax)){
                lmax=arr[i];
            }
            else{
                lmax=lmax+arr[i];
                gmax=max(gmax,lmax);
            }
        }
        cout<<gmax<<endl;
    }
    return 0;
}