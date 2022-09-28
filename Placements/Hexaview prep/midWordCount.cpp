#include<bits/stdc++.h>
using namespace std;

int noOfWord(string s,int n){ //find no. of words in string
    int ans=1;

    for(int i=0;i<n;i++){
        if(s[i]==' ')
          ans++;
    }
    return ans;

}
string ans(string s,int check){
        int i=0;
        int count=0;
        string temp="";

        while(count!=check){
          if(s[i]==' ')
          count++;
          i++;
        } 

       while(s[i]!=' '){
        temp+=s[i];
        i++;
       }
       return temp;
}

string result(string s,int wordsCount){
    int check=wordsCount/2;

    if(wordsCount%2==1){ //odd no of words
       return ans(s,check);

    }
    else{  //even no of words
        string s1=ans(s,check);
        string s2=ans(s,check-1);

        return (s1.length()>s2.length())?s1:s2;
    }
}

int main(){
    string s="welcome to world mystery";
    int n=s.length();
    int wordCount=noOfWord(s,n);

    cout<<"Total no of words : "<<wordCount<<endl;

    cout<<result(s,wordCount)<<endl;
    string str=result(s,wordCount);
    cout<<str.length()<<endl;

}

/*
given a string S find the length of middle word if the number of
words are even then there are two middle words.
return whichever is more in length.

eg.
i/p: Hexaview is hiring
o/p: 2

i/p:hexaview hires the best
o/p:5
*/

