#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int MAXPRINT=n*3+1;
	
	for(int row=0;row<MAXPRINT;row++)
	{
		for(int col=0;col<MAXPRINT;col++)
		{
			if(row==0 or row==MAXPRINT-1 or
             row==MAXPRINT/2 or row==col or
             MAXPRINT-row-1==col or
             col==MAXPRINT/2)
			{
				cout<<"* ";
			}
            else if(col>MAXPRINT/2 && col<MAXPRINT-row-1){
                cout<<"@ ";
            }
            else if(col<MAXPRINT/2 && col>=MAXPRINT-row-1){
                cout<<"@ ";
            }
			else
			cout<<"  ";
		}
		cout<<endl;
	}
	return 0;
}