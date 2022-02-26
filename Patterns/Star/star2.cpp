/*    
      *
     ***
    *****
   *******
   
*/

#include<iostream>
using namespace std;

int main()
{
    int row=1;
    int n;
    cin>>n;
    
    while(row<=n){
        //print space...
        int space=n-row;
        while(space){
            cout<<" ";
            space=space-1;
        }
        //1st triangle print...
        int col=1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        //print 2nd......
        int start=row-1;
        while(start){
            cout<<"*";
            start=start-1;
        }
        cout<<endl;
        row++;
    }
}