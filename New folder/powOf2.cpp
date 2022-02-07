//check given num are in form of num=2^x or not 
#include<iostream>
#include<cmath>
using namespace std;

int main(){
   int n;
   cin>>n;
   int count;
   
   for(int i=0;i<=30;i++){
   	    int ans=pow(2,i);
   	if(ans==n){
   		count=1;
       }
   }

if(count==1)
cout<<"yes";
else
cout<<"no";
return 0;
}
