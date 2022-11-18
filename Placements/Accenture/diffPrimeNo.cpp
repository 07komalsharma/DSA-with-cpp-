#include<iostream>
using namespace std;

void MaxDiff(int x,int y){
      int a[50]={0};
    for(int i=2;i<=y;i++){
        for(int j=i*i;j<=y;j+=i){
          if(a[i]==0){
            a[j]=1;
          }  
        }
    }
    int pre;  //min prime no.
    int suf;  //max prime no.
   for(int i=x;i<=y;i++){
    if(a[i]==1){
        pre=i;
        break;
    }
   } 

   for(int i=y;i>=x;i--){
    if(a[i]==0){
        suf=i;
        break;
    }
   } 
   cout<<suf<<" "<<pre<<endl;
   cout<<suf-pre<<endl;

}

int main(){
    int a=5,b=5; //number ki range
    MaxDiff(a,b);

    return 0;

}