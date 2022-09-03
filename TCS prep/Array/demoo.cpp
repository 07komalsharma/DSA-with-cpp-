#include<bits/stdc++.h>
using namespace std;

int find_max_digit(int num){
    int mx=0;
    while(num!=0){
        mx=max(mx,num%10);
        num=num/10;
    }
    return mx;

}
int main(){
    string s;
    cin>>s;

    int price=0;
    for(int i=0;i<s.size();i++){
        if(isdigit(s[i])){
           price=price+(s[i]-48);
        }
        else{
           price += find_max_digit(int(s[i])); 
        }
    }
    cout<<price;
}