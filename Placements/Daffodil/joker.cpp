/*
Given a number of boxes
joker 1: open all the boxes
joker 2: closes the box but only for multiples of 2
   i.e 2,4 ,6,8.....

joker 3:if box is open it closes the box & vice versa but only for
  multiple of 3 i.e 3,6,9,12,..

joker 4 :if box is open , it closes the box & vice versa but only for
  multiples of 4  i.e 4,8,12,16,20......

  show the final state of boxes..

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    /* approach 1
    int boxes=5;    //0 means box closed , 1 means box open
    int a[10]={0}; 

    for(int j1=1;j1<=5;j1++){   //joker 1 task
        a[j1]=1;
    }

    for(int j2=2;j2<=5;j2+=2){ //joker 2 task
        a[j2]=0;
    }

    for(int j3=3;j3<=5;j3+=3){ //joker 3 task
        a[j3]=!a[j3];
    }
    for(int j4=4;j4<=5;j4+=4){ //joker 4 task
        a[j4]=!a[j4];
    }
*/
   int joker=4;
   int boxes=5;
   int a[10]={0}; 

   for(int i=1;i<=joker;i++){
    for(int j=i;j<=boxes;j+=i){
       a[j]=!a[j];
    }
   }
    for(int i=1;i<=5;i++){
        if(a[i]==1){
            cout<<"Box "<<i<<" is opened "<<endl;
        }
        else{
             cout<<"Box "<<i<<" is closed "<<endl;
        }
    }
    return 0;
}