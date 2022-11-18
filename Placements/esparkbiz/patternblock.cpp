#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int MAXPRINT=n*3+1;

    for(int row=0;row<MAXPRINT;row++){
        for(int col=0;col<MAXPRINT;col++){
            if(row % 3 == 0 or col % 3 == 0){
                cout<<"* ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}