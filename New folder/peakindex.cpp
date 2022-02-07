#include<iostream>
using namespace std;

/*int peakIndex(int arr[],int n){
	
	if(n==1){
		return 0;
	}
	for(int i=0;i<n;i++){
		if(arr[i]>=arr[i-1] && arr[i]>=arr[i+1])
		    return i;
	}
	
	//complexity O(n)
}
int main(){
  int arr[4]={1,3,5,4};
  cout<<"peak is at index"<<peakIndex(arr,4);
  
}*/

int findpeak(int arr[],int s,int e,int n){
	int mid=s+(e-s)/2;

	
	if((mid==0 || arr[mid-1]<=arr[mid])&&
	(mid==n-1 || arr[mid+1]<=arr[mid])){
		return mid;
	}
	else if(mid>0 && arr[mid]<arr[mid-1]){
		return findpeak(arr, s, (mid - 1), n);	
	}
	else{
		return findpeak(arr, (mid + 1), e, n);
	}

}
//Here complexity O(logn)..
int main(){
	
	int arr[4]={3,4,5,1};
	cout<<"peak index is "<<findpeak(arr,0,3,4);
	
}
