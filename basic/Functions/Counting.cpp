#include<iostream>
using namespace std;

//4....print counting
//function signature

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
