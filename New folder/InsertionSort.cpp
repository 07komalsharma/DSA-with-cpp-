#include<bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp = arr[i];
        int j;

        for(j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}  

int main(){
    int arr[7]={10,1,7,4,8,2,11};
    InsertionSort(arr,7);
    cout<<"sorted array are :"<<endl;
    display(arr,7);
}