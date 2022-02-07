#include<iostream>
#include<algorithm>
using namespace std;

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void sortZeroOneTwo(int arr[],int n){
	int low=0,mid=0,high=n-1;
	
	while(mid<=high){
		switch(arr[mid]){
			
			case 0:
				swap(arr[low],arr[mid]);
				low++;
				mid++;
				break;
				
			case 1:
				mid++;
				break;
				
			case 2:
				swap(arr[mid],arr[high]);
				high--;
				break;
					 	
		}
	}
}

int main(){
	int arr[10]={1,0,2,0,2,1,0,0,2,2};
	
	sortZeroOneTwo(arr,10);
	printArray(arr,10);
	
	return 0;
	
}
