#include<bits/stdc++.h>
using namespace std;

/*
check given string is valid or not
validation conditions:-
1. set 1 = a to m
2. set 2 = N to Z

->each word from the string should belong to either & only
set is a valid word 
-> mixing of letters from the string should belong to either & only
set is a valid word 
-> return true for valid string & False if not .
.
.
example :
ab c NX VALID
NOP f AS INVALID
abcd STUV VALID
Bachelor Bhai INVALID
*/
bool set1(string str,int s,int e){
    for(int i=s;i<=e;i++){
        if(str[i]<97 or str[i]>109)
        return false;
    }
    return true;
}

bool set2(string str,int s,int e){
    for(int i=s;i<=e;i++){
        if(str[i]<78 or str[i]>90)
        return false;
    }
    return true;
}

int main(){
    string str="ab c NX";
    int n=str.length();
    int s=0,e=0;   // used to traverse string.. 

    while(s<n){
       while(str[e]!=' ' && e<n){
        e++;
       }
       if(str[s]>=97 && str[s]<=109){
        if(set1(str,s,e-1)==false){
           cout<<"Invalid String ";
           return 0; 
        }
       }
       else{
        if(set2(str,s,e-1)==false){
           cout<<"Invalid String ";
           return 0; 
        }
       } 
       s=e+1;
       e++;
    }
    cout<<"String is Valid.. "<<endl;

    return 0;
}

