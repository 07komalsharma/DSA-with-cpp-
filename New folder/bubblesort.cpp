#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        //for round 1 to n-1

        bool swapped=false;

        for(int j=0;j<n-i;j++){
            //process element till n-i th index
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
}
void display(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}  

int main(){
	
	int arr[6]={10,1,7,6,14,9};
	BubbleSort(arr,6);
	cout<<"sorted array:\n";
	display(arr,6);
	
return 0;		
} 

//complexity is O(n^2)
//if already sorted array then best case is O(n)..