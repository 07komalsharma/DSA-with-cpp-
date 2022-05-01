#include<iostream>
using namespace std;

int main(){
    int n,num,digit,rev=0;
    cin>>num;
    n=num;

    do{
        digit=num%10;
        rev=(rev*10)+digit;
        num=num/10;
    }while(num!=0);

    cout<<"reversed number is "<<rev<<endl;

    if(n==rev){
        cout<<"no. is pallindrome..."<<endl;
    }
    else{
        cout<<"not a pallindrome..."<<endl;
    }

return 0;
}
