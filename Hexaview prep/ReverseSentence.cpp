#include<bits/stdc++.h>
using namespace std;

void reverseWords(string s){
    vector<string> temp;
    string str="";

    for(int i=0;i<s.length();i++){
        if(s[i] == ' '){ 
           temp.push_back(str); 
           str="";
        }
        else{
            str=str+s[i];
        }
        
    }
    
    temp.push_back(str);

        // Now print from last to first in vector
    int i;
    for (i = temp.size()-1; i > 0; i--)
        cout << temp[i] << " ";
    // Last word remaining,print it
   cout<<temp[0]<<" ";
}

int main()
{
    string s = "i like this program very much";
    reverseWords(s);
    return 0;
}
