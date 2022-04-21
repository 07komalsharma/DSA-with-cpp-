#include<bits/stdc++.h>
using namespace std;
class Hero{
    //properties
    private:
    int health;

    public:
    char level;

    //Parametrised Constructor
    Hero(int health){
       
       this->health=health; 
    }

    Hero(int health,char level){
       this->level=level;
       this->health=health; 
    }

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
    //creation of object statically
    Hero ramesh(10);
    // cout<<"Address of ramesh"<<&ramesh<<endl;
    ramesh.print();

    //dynamically
    Hero *h = new Hero(11);  //or Hero();
    h->print();
    
    Hero temp(22,'B');
    temp.print();

    return 0;
}

//current object ka address this ke andr store hota h 
//this is a pointer