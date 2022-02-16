#include<iostream>
#include<string>
#include<vector>
using namespace std;

int compress(vector<char>& chars){
    int i=0;
    int ansIndex=0;
    int n=chars.size();

    while(i<n){
        int j=i+1;
        while(j<n && chars[i]==chars[j]){
            j++;
        }

     chars[ansIndex++]=chars[i];

     int count=j-i;

     if(count>1){

         string cnt=to_string(count);
         for(char ch: cnt){
             chars[ansIndex++]=ch;
         }
     }
     i=j;
    }
    return ansIndex;
}
int main(){
    vector<char> ch{'a','a','b','b','b','c','c','c'}; //.......o/p is like {a,2,b,3,c,3} it returns 6.......
    cout<<compress(ch);
}