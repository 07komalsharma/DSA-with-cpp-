#include<iostream>
using namespace std;

void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getLength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char name[20];

    cout<<"Enter your name "<<endl;
    cin>>name;

    int len=getLength(name);
    cout<<"length : "<<len<<endl;
    
    cout<<"your name is ";
    reverse(name,len);
    cout<<name<<endl;
return 0;
}