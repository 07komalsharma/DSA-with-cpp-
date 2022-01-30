//first occurence of a number using binary search in an sorted array...
#include<iostream>
using namespace std;

int FirstOccn(int arr[],int n,int key){
    int start=0;
	int end=n-1;
	int ans=-1;
	
	int mid=start+(end-start)/2;
	
	while(start<=end){
		
		if(arr[mid]==key){
			ans=mid;
			end=mid-1;
		}
		
		else if(key>arr[mid]){ //go right
			start=mid+1;
		}
		else{ //go left
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}	
	return ans;	
}
int main(){
	
	int even[5]={0,2,2,4,5};
	int answer=FirstOccn(even,5,2);
	
	cout<<"found at index "<<answer;
	
	
}
