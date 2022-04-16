#include<bits/stdc++.h>
using namespace std;

int subsequence(string str,string output[]){
    //base case
    if(str.length()==0){
        output[0]="";
        return 1;
    }

    //first character ko chodh kr bakki ka subsequence find kre
    int SmallerOutputSize=subsequence(str.substr(1),output);

   //str.substr(1)-> first char ko leave krke bakki string end tk ko lega 

    //first ko add krde bakki sbke sath fir array me aage store kre
    for(int i=0;i<SmallerOutputSize;i++){
        output[i+SmallerOutputSize]=str[0]+output[i];
    }
    return 2*SmallerOutputSize;    //double hoga poora jb sb me add krenge aur aage array me store krenge total count fir 
}

int main(){
    string output[20];

    int outputSize=subsequence("abcd",output);

    for(int i=0;i<outputSize;i++){
        cout<<output[i]<<endl;
    }

    
return 0;
}