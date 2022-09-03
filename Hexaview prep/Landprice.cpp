#include<bits/stdc++.h>
using namespace std;

int minIndex(int arr[],int s,int e){
    int ans;
    int temp=INT_MAX;

    while(s<=e){
        if(arr[s]<temp){
          temp=arr[s];
          ans=s;
        }
        s++;
    }
    return ans;  //index value of min land price

}

int maxIndex(int a[],int s,int e){ //max index to sell land
    int ans;
    int temp=INT_MIN;

    while(s<=e){
        if(a[s]>temp){
            temp=a[s];
            ans=s;

        }
        s++;
    }
    return ans;   //max land price just returning index value at which price is maximum
}

int main(){
    int a[]={700000,100000,500000,300000};
    int n=4;  //size of array
    int buyIndex=minIndex(a,0,n-2);
    int sellIndex=maxIndex(a,buyIndex+1,n-1);


    cout<<"Land purchased with amount Rs. "<<a[buyIndex]<<endl;
    cout<<"Land sold with amount Rs. "<<a[sellIndex]<<endl;
    cout<<"Profit earned Rs. "<<(a[sellIndex]-a[buyIndex])*0.1<<endl;

    //10% = 10/100 = 0.1

}
/*

you are a property dealer who earns 10% commision on every deal resulting in profit.
you are given an array landprice[] where landprice[i] is the price of a given land 
on the ith day return the maximum commision you can earn by buying land on any 
particular day and selling it in the future at higer
price

*/