
#include<iostream>
using namespace std;

int main(){
    int n=6;
    int a[20][20]={0};

    for(int i=0;i<=n;i++){
        for(int k=1;k<=n-i;k++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            if(j==1 or j==i)
              a[i][j]=1;

            else
              a[i][j]=a[i-1][j-1]+a[i-1][j];  
        
        cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}