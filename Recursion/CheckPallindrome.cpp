#include<iostream>
using namespace std;

bool checkPallindrome(string str,int i,int j){
    //base case
    if(i>j){
        return true;
    }

    if(str[i]!=str[j])
       return false;

    else{
        //recursive call
        return checkPallindrome(str,i+1,j-1);
    }   

}

int main(){
    string name="abbccbba";
    cout<<endl;

    bool isPallindrome = checkPallindrome(name,0,name.length()-1);

    if(isPallindrome){
        cout<<"Its a Pallindrome "<<endl;
    }
    else{
        cout<<"its not a Pallindrome "<<endl;
    }
    return 0;
}