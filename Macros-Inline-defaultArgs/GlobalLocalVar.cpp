#include<iostream>
using namespace std;

void a(int& i){
    char ch = 'a';
    cout<<i<<endl;
    
}

void b(int& i){
    cout<<i<<endl;
}

int main(){
    int i=5;
    a(i);

    {
        int i=2;
        cout<<i<<endl;
        b(i);
    }


    return 0;
}
//global var means sare access kr skte hai
//drawback : GV isko koi v change kr skta hai
