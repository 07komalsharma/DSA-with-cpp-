/*

 5 4 3 2 1 2 3 4 5 
    4 3 2 1 2 3 4 
      3 2 1 2 3 
        2 1 2
          1

pending.........
*/
#include<iostream>
using namespace std;

int main(){
    int count=5;
    int k=1;
    while(count!=0){
      for(int i=0;i<k;i++){
        cout<<"  ";
      }
      k++;
        for(int i=count;i>0;i--){
            cout<<i<<" ";
        if(i==1){
            for(int j=i+1;j<=count;j++){
              cout<<j<<" "; 
            }
        }
        }
    
    cout<<endl;
    count--;
}
}