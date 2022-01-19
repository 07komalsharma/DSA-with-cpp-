
//if reversing x causes the value to go outside the signed 32-bit integer range [-2^31,2^31-1],
//then return 0;

#include<iostream>
using namespace std;

int main(){
	int num,digit,ans=0;
	cin>>num;
	
	while(num!=0){
		digit=num%10;
		
		if((ans>INT_MAX/10) || (ans<INT_MIN/10)){
			return 0;
		}
		ans=ans*10+digit;
		num=num/10;
	}
	cout<<ans;
	
return 0;	
}
