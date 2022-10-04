#include<bits/stdc++.h>
using namespace std;
/* 1st approach........   TC=O(n^2)
int maxProfit(vector<int> &arr){
    int maxPro=0;
    int n=arr.size();

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[i]){
            maxPro=max((arr[j]-arr[i]),maxPro);
            }
        }
    }
    return maxPro;
}
*/
//2nd approch.....  TC=O(n)
int maxProfit(vector<int> &arr){
    int maxPro=0;
    int n=arr.size();
    int minPrice=INT_MAX;

    for(int i=0;i<arr.size();i++){
        minPrice=min(minPrice,arr[i]);
        maxPro=max(maxPro,arr[i]-minPrice);
    }
    return maxPro;
}
int main(){
    vector<int> arr={7,1,5,3,6,4};
    int maxPro=maxProfit(arr);
    cout<<"max profit is : "<<maxPro<<endl;
}

