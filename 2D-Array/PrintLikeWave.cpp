#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

vector<int> waveprint(vector<vector<int> > arr,int n,int m){
    vector<int> ans;

    for(int col=0;col<m;col++){
        if(col&1){              //odd index ->bottom to top
             for(int row=n-1;row>=0;row--){
                 ans.push_back(arr[row][col]);
             }
        }
        else{
            for(int row=0;row<n;row++){ //even index ->top to bottom
                ans.push_back(arr[row][col]);
            }
        }
    }
    return ans;
}

//......issue in function call
int main(){
    vector<vector<int>> vect=
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
     for(int i=0;i<vect.size();i++){
        for(int j=0;j<vect.size();j++){
        cout<<vect[i][j];
        }
        cout<<endl;
     }
     vector<int> ans=waveprint(vect,3,3);
     
return 0;
}