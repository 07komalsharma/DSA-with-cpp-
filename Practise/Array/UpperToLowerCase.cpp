#include<iostream>
using namespace std;

/*
given a string convert it into alternate lowercase and uppercase letters
first char should be lower then upper case so...
Note: string will be only consist of lowercase and uppercase english alphabets.

Example:

i/p: CampusMonk
o/p: cAmPuSmOnK


int main(){
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){

        //at even positions lower case will be their
        if(i%2==0){
            s[i]=tolower(s[i]);
        }
        else{
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;
    return 0;
}
*/
int main(){
    string s;
    cin>>s;
      
      for(int i=0;i<s.size();i++){
        //even
        if(i%2==0){
            //lowercase
            if(!(s[i]>='a' && s[i]<='z')){
                s[i]+=32;
            }
        }
        else{
            if(!(s[i]>='A' && s[i]<='Z')){
                s[i]-=32;
            }
        }
    }

    cout<<s;
    return 0;
}