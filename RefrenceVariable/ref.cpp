#include<iostream>
using namespace std;

void update(int& n){ //we create refrence var
    n++;
}

int main(){

    /*
    int i=5;

   //create a ref variable

   int &j=i;
   cout<<i<<" "<<j<<endl;
   i++;
   j++;
   cout<<i<<endl;
   */

    int n=8;
    cout<<"before"<<n<<endl;

    update(n);
    cout<<"after"<<n<<endl;



    return 0;
}