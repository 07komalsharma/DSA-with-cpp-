#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n;
        cin>>n;
        int arr[n-1];
        int sum=0;
        int total=n*(n+1)/2;
        for(int i=0;i<n-1;i++){
            cin>>arr[i];
            sum=sum+arr[i];
        }
        cout<<total-sum<<endl;
       
}
return 0;

}