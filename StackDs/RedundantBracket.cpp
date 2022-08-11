#include<bits/stdc++.h>
using namespace std;

bool findRedundantBracket(string &s){
    stack<char> st;

   for(int i=0;i<s.length();i++){
    char ch=s[i];

    if(ch=='(' || ch=='-' || ch=='+' || ch =='/' || ch =='*'){
        st.push(ch);
    }
    else{
        //ch ya toh ) hai ya fir lower case letter hai
        if(ch==')'){
            bool isReduandant=true;

            while(st.top()!='('){
               char top =st.top();
                if(top=='-' || top=='+' || top =='/' || top =='*'){
                  isReduandant=false;
                }
                st.pop();
            }
            if(isReduandant==true)
              return true;

            st.pop();
            }
        }
    }
    return false;
   } 