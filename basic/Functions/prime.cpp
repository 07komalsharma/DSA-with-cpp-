#include<iostream>
using namespace std;

bool isPrime(int n){
	
	for(int i=2;i<n;i++){
		//divide hogya ,not a prime
		if(n%i==0){
			return 0;
		} 
	}
	return 1;
}
int main(){
	int num;
	cin>>num;
	if(isPrime(num)){
		cout<<" is a prime number";
	}
	else{
		cout<<" not a prime number";
	}
}
