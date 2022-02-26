#include<iostream>
#include<vector>
using namespace std;


int Countprimes(int n){
    int cnt=0;
    vector<int> prime(n+1,true);

    prime[0]=prime[1]=false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            cnt++;
        }
        for(int j=2*i;j<n;j=j-i){
            prime[j]=0;
        }
    }
    return cnt;
}
//Count total no. of prime no.'s between certain number like from(1-40) their are 12 prime no.'s