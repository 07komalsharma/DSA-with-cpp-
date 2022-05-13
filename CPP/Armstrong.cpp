#include <bits/stdc++.h>
using namespace std;
  
// 153 = 1*1*1 + 5*5*5 + 3*3*3 

int main(){
int num , r, sum=0, temp; 

cout<<"Enter the Number=  ";    
cin>>num;
temp=num;

while(num>0)    
{    
r=num%10;           // 153 % 10 =3 , 15 % 10 = 5, 1 % 10 = 1 
sum=sum+(r*r*r);    
num=num/10;    
}  

if(temp==sum)    
cout<<"Armstrong Number."<<endl;    
else    
cout<<"Not Armstrong Number."<<endl;  

return 0;  
}  
