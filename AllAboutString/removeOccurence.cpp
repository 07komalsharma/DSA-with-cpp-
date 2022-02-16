#include<iostream>
#include<string>
using namespace std;


string removeOccurence(string s,string part){

    while(s.length()!=0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
    return s;
}

int main(){
    string str="daabcbaabcbc";
    string prt="abc";
    cout<<removeOccurence(str,prt)<<endl;     //it removes abc from the main string str nd finally returns dab 

   return 0; 
}