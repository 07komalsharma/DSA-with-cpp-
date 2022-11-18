#include<iostream>
using namespace std;

int main(){
    int a[5]={1,3,5,6,7};
    int b[5]={1,2,3,4,5};

    int e=4;
     bool check=1;
    for(int i=0;i<5;i++){
       // bool check=1;
        for(int j=0;j<5;j++){
             if(a[i]==b[j])
             check=0;
             
        }
        if(check){
            cout<<a[i]<<" ";
        }
    }

    return 0;
}
//2nd qn balanced parenthesis...