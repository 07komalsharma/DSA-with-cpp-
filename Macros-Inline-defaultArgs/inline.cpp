//inline function are used to reduce the funtion calls overhead
#include<iostream>
using namespace std;

inline int getMax(int& a,int& b){ 
    return (a>b) ? a : b;
}

int main(){
    int a=1,b=2;
    int ans=0;
    
    /*
    if(a>b){
        ans=a;
    }
    else{
        ans=b;
    }
*/
   // ans = (a>b) ? a : b;
   ans=getMax(a,b);
   cout<<ans<<endl;

   a=a+1;
   b=b+1;

   ans=getMax(a,b);
   cout<<ans<<endl;

  return 0;
}
//meaning is that compile hone se phle jaha v getMax hai wo iss 
//condition se replace hojayegi (a>b) ? a : b; like macros
//readabilty and performance is good no extra memory uses