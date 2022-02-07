#include<iostream>
using namespace std;

int SelectionSort(int arr[],int n){
	int i,minIndex;
	for(i=0;i<n-1;i++){
         minIndex=i;
    }
	for(int j=i+1;j<n;j++){
		if(arr[j]<arr[minIndex]){
			minIndex=j;
		}
	}
	swap(arr[minIndex],arr[i]);
}

int display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}  

int main(){
	
	int arr[6]={1,7,9,2,3,0};
	SelectionSort(arr,6);
	cout<<display(arr,6);
	
	
	
}
