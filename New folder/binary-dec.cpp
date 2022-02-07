#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	int ans=0;
	
	while(n!=0){
		int digit=n%10;
		if(digit==1){
		   ans=ans+pow(2,i);	
		}
		n=n/10;
		i++;
	}
	cout<<ans<<endl;
	}
