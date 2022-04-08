#include<iostream>
using namespace std;

int countDistinctWay(long long nStairs){
    if(nStairs<0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }

    int ans=countDistinctWay(nStairs-1)
    +countDistinctWay(nStairs-2);

    return ans;
}
int main(){
    long long n;
    cin>>n;

    int res=countDistinctWay(n);
    cout<<res<<endl;

    return 0;
}