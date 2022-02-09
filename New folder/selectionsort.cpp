#include<bits/stdc++.h>
using namespace std;

void SelectionSort(int arr[],int n){
	int i,j,minIndex;
	for(i=0;i<n-1;i++){
         minIndex=i;

	    for(j=i+1;j<n;j++){
		   if(arr[j]<arr[minIndex])
			   minIndex=j;
	}
	swap(arr[minIndex],arr[i]);
}
}

void display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}  

int main(){
	
	int arr[6]={1,7,9,2,3,0};
	SelectionSort(arr,6);
	cout<<"sorted array:\n";
	display(arr,6);
	
return 0;		
}
