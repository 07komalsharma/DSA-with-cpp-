#include<iostream>
using namespace std;

// example: A=1 3 5 6 7
//          B=1 2 3 4 5
//          A Union B=2 4 1 3 5 6 7

int main(){
    int a[]={1,3,5,6,7};
    int b[]={1,2,3,4,5};

    for(int i=0;i<5;i++){
        bool check=1;
        for(int j=0;j<5;j++){
           if(a[i]==b[j]){
            check=0;
            break;
           }
        }
        if(check){
            cout<<a[i]<<" ";
        }
    
    }
    for(int i=0;i<5;i++){ //printing 2nd array...
        cout<<b[i]<<" ";

    }





return 0; 
}