#include<iostream>
using namespace std;

int main(){
    int arr[10]={2,4,5,6};

    cout<<"address of first memory block is "<<arr<<endl;
    cout<<"address of first memory block is "<<&arr[0]<<endl;
    cout<<"hii "<<*arr<<endl;
    cout<<*arr+1<<endl; 
    cout<<*(arr+1)<<endl; 

// arr[i] = *(arr+i)  , i[arr] = *(i+arr)

   int temp[10];
   cout<<sizeof(temp)<<endl;

   int *ptr=&temp[0];
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;

   cout<<sizeof(temp)<<endl;
   cout<<sizeof(*temp)<<endl;
   cout<<sizeof(&temp)<<endl;


    return 0;
}