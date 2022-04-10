#include<iostream>
using namespace std;

void reverse(string& s,int i,int j){

    cout<<" call recieved for "<<s<<endl;

    //base case
    if(i>j){
        return ;
    }

    swap(s[i],s[j]);
    i++;
    j--;

    //recursive call
    reverse(s,i,j);
}

int main(){
    string name="komal";

    reverse(name,0,name.length()-1);
    cout<<endl;

    cout<<"reversed string are  : "<<name<<endl;
}
/*
changes sare string s pe ho rhe aur hmne print name kraya hai 
so iska refrence pass hoga 
so we use & s.
*/