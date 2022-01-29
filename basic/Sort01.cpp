#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int sortOne(int arr[],int n){
	int left=0,right=n-1;
	
	while(left<right){
		if(arr[left]==0 && left<right){
			left++;
		}
		else if(arr[right]==1 && left<right){
			right--;
		}
		else if((arr[left]==1) && (arr[right]==0) && left<right){
			swap(arr[left],arr[right]);
			left++;
			right--;
		}	
	}
	}
int main(){
	int arr[6]={1,1,1,0,0,0};
	
	sortOne(arr,6);
	printArray(arr,6);
	
	return 0;
}
