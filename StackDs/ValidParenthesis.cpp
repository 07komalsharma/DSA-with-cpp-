#include<bits/stdc++.h>
using namespace std;

bool isValidParenthesis(string expression){
    stack<char> s;
    for(int i=0;i<expression.length();i++){
        char ch = expression[i];

        //if opening bracket , stack push
        //if closing bracket,stack top check

        if(ch =='{' || ch == '[' || ch == '('){
            s.push(ch);
        }
        //check at each step while pushing if closing brace are their then compare it with a top
        else{
            //for closing bracket
            if(!s.empty()){
                char top = s.top();

                if(( ch == ')' && top == '(') ||
                 ( ch == ']' && top == '[') ||
                 ( ch == '}' && top == '{') ){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
    }

    if(s.empty())
      return true;
    else
      return false;  
}

int main(){
    string str = "[()]{}{[()()]()}";

   if (isValidParenthesis(str))
      cout << "This is Balanced Expression"<<endl;
   else
      cout << "This is Not Balanced Expression"<<endl;
    

}