//......Swap the alternate elements of an array...

#include<iostream>
using namespace std;

void swapAlt(int arr[],int size){
	for(int i=0;i<size;i+=2){
		if(i+1<size){
			//swap(arr[i],arr[i+1]);
			int temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
		}
	}	
}

void printArray(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int even[6]={2,3,4,5,6,7};
	int odd[5]={9,8,4,5,3};
	
	swapAlt(even,6);
	swapAlt(odd,5);
	
	printArray(even,6);
	printArray(odd,5);
  
return 0;  
}

