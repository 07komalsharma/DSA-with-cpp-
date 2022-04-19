#include<bits/stdc++.h>
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
    Hero a; //static allocation
    a.setLevel('A');
    a.setHealth(80);
    cout<<"level is "<<a.level<<endl;
    cout<<"health is "<<a.getHealth()<<endl;

    //dynamically
    Hero *b=new Hero;
    b->setHealth(70);
    b->setLevel('D');

    cout<<"level is "<<(*b).level<<endl;
    cout<<"health is "<<(*b).getHealth()<<endl;


    
    return 0;
}