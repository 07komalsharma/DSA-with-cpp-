/* 
       *******
        *****
         ***
          * 

*/
#include<iostream>
using namespace std;

int main(){
   int n;
   cin>>n;
   int row=1;

   while(row<=n){
        //print space...
      int space=row-1;
      while(space){
         cout<<" ";
         space=space-1;
        }
        //1st triangle print...
      int star=n-row+1;
      while(star){
         cout<<"*";
         star--;
        }
        //print 2nd......
      int start=n-row;
      while(start){
         cout<<"*";
         start=start-1;
        }
        cout<<endl;
        row++;
    }

return 0;
}
