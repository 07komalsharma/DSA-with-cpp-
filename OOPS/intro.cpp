#include<bits/stdc++.h>
//#include "hero.cpp" if class is in another file
using namespace std;

class Hero{
    //properties
    private:
    int health;

    public:
    char level;

    void print(){
        cout<<level<<endl;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health=h;
    }

    void setLevel(char l){
        level=l;

    }
    

};

int main(){
    //creation of object
    Hero ramesh;
    cout<<"size of ramesh is "<<sizeof(ramesh)<<endl;

    ramesh.setHealth(70);      //use setter
    cout<<"ramesh health is "<<ramesh.getHealth()<<endl;
    
    ramesh.level='A';
    //cout<<"health is : "<<ramesh.health<<endl;

    cout<<"level is : "<<ramesh.level<<endl;


    return 0;
}
//empty class ke case me object ko 1 byte ki memory allocate hoti h
//by default class ke andr private acess modifier hota hai

//padding , greedy alingnment