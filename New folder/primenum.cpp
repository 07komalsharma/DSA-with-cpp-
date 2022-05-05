#include <bits/stdc++.h>

using namespace std;

int main()
{
   int num,i;
   int FLAG=1;
   cout<<"Enter any Positive Number :"<<endl;
   cin>>num;
   for(i=2;i<=sqrt(num);i++)
   {
      if(num%i == 0)
      {
         FLAG = 0;
         break;
      }
   }
   if(FLAG == 1)
   {
      cout<<"is Prime Number n;"<<endl;
   }
   else
   {
      cout<<"not"<<endl;
   }
 


    return 0;
}