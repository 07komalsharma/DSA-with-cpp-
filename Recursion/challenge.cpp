#include<iostream>
#include<cstdlib>
using namespace std;

int main(){

int row;
cin>>row;
int col;
cin>>col;

int **arr=new int*[row];

    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }


cout<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<(rand() % 100)+1<<" "; 
        }
        cout<<endl;
    }

}
