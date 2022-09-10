#include<bits/stdc++.h>
using namespace std;

int digitSum(int n,int d){
    int ans=0;
    int itr=d;

    while(itr<=n){
    //if last digit is equal to d
    if(itr%10==d){
        ans++;
    }

    //first digit equal to d
    if(itr!=0 && itr/10==d){
        ans++;
        itr++;
    }

    //for reverse of 12 i.e 21

    else if(itr/10==d-1){
        itr=itr+(10-d);
    }

    else{
        itr=itr+10;
    }
   
    }
    return ans;

}

int main(){
    int N=11;
    int d=1;

    cout<<digitSum(N,d)<<endl;
    return 0;
}