#include<iostream>
using namespace std;

void insertBegin(int* arr,int n,int value){
 
 for(int i=n-1;i>=0;i--){
    arr[i+1]=arr[i];
 }
 arr[0]=value;
}
void insertEnd(int *arr,int n,int value){
    arr[n]=value;
}

void insertAtpos(int *arr,int n,int value,int pos){
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=value;
}

int main(){
    int n=3;
    int pos=3;
    int arr[11]={1,2,4};
    int value=3;
    cout<<"before inserting the value at begining"<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertBegin(arr,n,value);
    cout<<"after inserting at begining :"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    insertEnd(arr,n,value);
    cout<<"inserting at end"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;

    insertAtpos(arr,n,value,pos);
     cout<<"inserting at specific position"<<endl;
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";

    }

    cout<<endl;
}
