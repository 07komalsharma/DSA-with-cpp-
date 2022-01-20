#include<iostream>
using namespace std;


int findUnique(int arr[], int size)
{
   	int ans = 0;
    
    for(int i = 0; i<size; i++) {
        ans = ans^arr[i];       //use XOR operation as we know a^a=0 & 0^a=a
    }
    return ans;
}


int main(){
	int arr[5]={1,3,4,1,3};
	int answer=findUnique(arr,5);     //so here 1^1=0,3^3=0 & 0^4^0=4 
	cout<<"unique element is : "<<answer;
	
}
