#include<iostream>
using namespace std;

void print(int arr[],int n,int start=0){
    for(int i=start;i<n;i++){
        cout<<arr[i]<<endl;
    }

}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    
    print(arr,size);
    cout<<endl;
    print(arr,size,2);

    return 0;
}

//function ke signature me apne ek argument optional bna diya
//agr input me uski value mili then we use it if not found then defalut processing would be done
// and output will not get affected
//right most se default start hogi