//no of substring having equal lowercase and upper case
//eg : gEEk=3 i.e gE ,Ek , gEEk
#include<bits/stdc++.h>
using namespace std;

int CountSubstring(string& S,int N){
    //S - sum
    //stores the count of prefixes having sum S considring uppercase lowercase characters as 1,-1
    unordered_map<int,int> prevSum;

    int res=0;

int currSum=0;

for(int i=0;i<N;i++){
    if(S[i]>='A' and S[i]<='Z'){
        currSum++;
    }
    else{
        currSum--;
    }
    if(currSum==0){
        res++;
    }
    //if current sum exists in the Hasmap prevSum
    if(prevSum.find(currSum)!=prevSum.end()){
        //increment the resultant sum by count by 1
        res+=(prevSum[currSum]);
    }
    prevSum[currSum]++;

}
return res;
}

int main(){
    string s="gEEk";
    cout<<CountSubstring(s,s.length());
    return 0;
}
