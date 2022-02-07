#include<iostream>
using namespace std;

int getPivot(int arr[],int n){
	int s=0;
	int e=n-1;
	int mid=s+(e-s)/2;
	
	while(s<e){
		if(arr[mid]>=arr[0]){
			s=mid+1;
		}
		else{
			e=mid;
		}
		mid=s+(e-s)/2;
	}
	return s;
}
int BinarySearch(int arr[],int s,int e,int key){
    int start=s;
	int end=e;
	
	int mid=start+(end-start)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			return mid;
		}
		
		else if(key>arr[mid]){
			start=mid+1;
		}
		else{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}	
	return -1;	
}
int findPosition(int arr[],int n,int target){
	int pivot=getPivot(arr,n);
	
	if(target>arr[pivot] && target<=arr[n-1]){
		return BinarySearch(arr,pivot,n-1,target);
	}
	else{
		return BinarySearch(arr,0,pivot-1,target);
	}
	
}

int main(){
	int arr[5]={7,9,1,2,3};
	cout<<"target element found at  "<<findPosition(arr,5,2);
}

