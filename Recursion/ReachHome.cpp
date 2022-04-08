#include<iostream>
using namespace std;

void reachHome(int src,int dest){

    cout<<"source "<<src<<" destination "<<dest<<endl;

    //base case
    if (src==dest){
        cout<<"pahuch gyi"<<endl;
        return ;
    }

    //processing ek step aage bdh jao
    src++;

    //recursive call
    reachHome(src,dest);

}
int main(){
    int dest=10;
    int src=1;

    cout<<endl;

    reachHome(src,dest);
}
//ek case solve krna h bakki ka khud hoga by recursive call