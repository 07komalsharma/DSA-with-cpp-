#include<iostream>
using namespace std;

int main(){
   int n;
    cin>>n;
    int MAXPRINT=n*3+1;
	
	for(int row=0;row<MAXPRINT;row++)
	{
		for(int col=0;col<MAXPRINT;col++)
		{
			if(row%3==0 or col%3 == 0)
			{
				cout<<"* ";
			}
            else if(row==col or row+1 ==col or
                    col+1 ==row or MAXPRINT-row ==col or
                    MAXPRINT-row-1 ==col or 
                    MAXPRINT-row-2 ==col){
                cout<<"@ ";
            }
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}