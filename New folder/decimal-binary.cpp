#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int n,i;
	cin>>n;
	int ans=0;
	
	while(n!=0){
		int bit = n&1;
		ans = (bit*pow(10,i))+ans;
		n = n>>1;
		i++;
	}
	cout<<"answer is"<<ans<<endl;
	cout<<(n&1)<<endl;  
	cout<<(n>>1);
	return 0;	
	}
	
	
