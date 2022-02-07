//1....function for calculating power of any number
//3....nCr calculation
#include<iostream>
using namespace std;

int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}

int nCr(int n,int r){
	int num=factorial(n);
	int deno=factorial(r)*factorial(n-r);
	
	return num/deno;
}

int main(){
	int n,r;
	cin>>n>>r;
	
	 cout<<"answer is "<<nCr(n,r)<<endl;
}
/*
int power(int a,int b){
	int ans=1;
	
	for(int i=1;i<=b;i++){
		ans=ans*a;
	}
	return ans;	
}
int main(){
	int a,b;
	cin>>a>>b;
	
	int answer=power(a,b);
	cout<<"answer is : "<<answer<<endl;	
*/
//

//2....even odd function program
//1->even
//0->odd
/*bool isEven(int a){
	if(a&1){
		return 0;
	}
	else{
		return 1;
	}
}

int main(){
	
	int num;
	cin>>num;
	
	if(isEven(num)){
		cout<<"number is even"<<endl;
	}
	else{
		cout<<"number is odd"<<endl;
	}
return 0;
}
*/
//3....nCr calculation
/*
int factorial(int n){
	int fact=1;
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	return fact;
}

int nCr(int n,int r){
	int num=factorial(n);
	int deno=factorial(r)*factorial(n-r);
	
	return num/deno;
}

int main(){
	int n,r;
	cin>>n>>r;
	
	 cout<<"answer is "<<nCr(n,r)<<endl;
}
*/
//4....print counting
  //function signature
  /*
void printCounting(int n){
	//function body
	for(int i=1;i<=n;i++){
		cout<<i<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	
	printCounting(n);
	return 0;
}

*/
//5...prime no. code

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

























