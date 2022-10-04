#include<iostream>
using namespace std;

/* prb: if x%3==0 && x%5==0 print fizzbuzz
        if x%3==0  print fizz
        if x%5==0 print buzz
        if all these false then print value  

*/
int main(){
    int limit=30;
    /*
    for(int i=1;i<=limit;i++){
        string s="";
        if(i%3==0)
        s+="fizz";

        if(i%5==0)
        s+="buzz";

        if(s=="")
        cout<<i<<endl;

        else{
            cout<<s<<endl;
        }

    }
    */
   //most optimise way......
   int f=0;
   int b=0;
   for(int i=1;i<=limit;i++){
    f++;
    b++;
    string s="";

    if(f==3){
       s+="fizz";
       f=0;
    }
    if(b==5){
        s+="buzz";
        b=0; 
    }
    if(s==""){
     cout<<i<<endl;
    }
    else{
        cout<<s<<endl;
    }



   }
}