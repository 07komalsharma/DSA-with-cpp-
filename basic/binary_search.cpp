#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int start=0;
	int end=n-1;
	
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
int main(){
	
	int even[10]={1,2,3,4,5,6,7,8,9,10};
	int odd[5]={2,4,6,8,70};
	
	int r1=BinarySearch(even,10,9);
	cout<<" key is found at"<<r1<<endl;
	
	int r2=BinarySearch(odd,5,6);
	cout<<" key is found at"<<r2<<endl;
	
}
