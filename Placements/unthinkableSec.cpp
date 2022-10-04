#include<bits/stdc++.h>
using namespace std;

//mega prime number till n 
// a number is said to be mega prime which when divided
//into atomic values like: 23,17,....as 2&3 both are prime

bool isPrime(int x){
    for(int i=2;i<=sqrt(x);i++){
       if(x%i==0){
        return 0;
       }
    }
    return 1;
}
void result(int n){
    for(int i=2;i<=n;i++){
       if(isPrime(i)) { // 2,3,5,7
        if(i<10)      
           cout<<i<<endl;
       
       else{
        bool check=1;
        int temp=i;
        while(temp>1){
            int temp2=temp%10; //23->23%10=>3
            if(!isPrime(temp2)){
                check=0;
                break;
            }
            temp=temp/10;   //---> 23/10 =>2   
        }

        if(check)
        cout<<i<<endl;
       }
       }
     } 
}
int main(){
    int n=30;
    result(n);

    return 0;
}