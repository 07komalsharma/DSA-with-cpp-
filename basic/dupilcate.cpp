/*You are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once.
There is a single integer value that is present in the array twice. 
Your task is to find the duplicate integer value present in the array.*/
#include<iostream>
using namespace std;

int duplicate(int arr[],int n){
	int ans=0;
	for(int i=0;i<n;i++){
		ans=ans^arr[i];   //XOR ing all array elements
	}
	for(int i=1;i<n;i++){
		ans=ans^i;         //XOR [1,n-1]
	}
	return ans;
}
int main(){          //array elements having (1,n-1) type values
	int arr[6]={3,4,2,5,1,2};
	int dup=duplicate(arr,6);
	cout<<"duplicate no. is "<<dup;
	
return 0;	
}
