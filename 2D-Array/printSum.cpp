#include<iostream>
#include<bits/stdc++.h>
using namespace std;

/*
//row wise sum.........
void printRowSum(int arr[][4],int row,int col){
    cout<<"Printing Row Wise sum :"<<endl;
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}

//column wise sum........
void printColSum(int arr[][4],int row,int col){
    cout<<"Printing Column Wise sum :"<<endl;
    for(int col=0;col<4;col++){
        int sum=0;
        for(int row=0;row<3;row++){
            sum+=arr[row][col];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
*/
int largestRowSum(int arr[][4],int row,int col){
    int maxi=INT_MIN;
    int rowIndex=-1;

    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum+=arr[row][col];
        }

        if(sum>maxi){
           maxi = sum;
           rowIndex=row;
    }
}
  cout<<"the maximum sum is "<<maxi<<endl;
  return rowIndex;
}

int main(){
    int arr[3][4];
    
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>>arr[row][col];
        }
    }

    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }

  // printRowSum(arr,3,4);
   //printColSum(arr,3,4);

   int ans=largestRowSum(arr,3,4);
   cout<<"max row is at index"<<ans<<endl;

return 0;
}