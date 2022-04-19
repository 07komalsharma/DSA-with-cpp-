#include<bits/stdc++.h>
using namespace std;
class Hero{
    //properties
    private:
    int health;

    public:
    char level;

    Hero(){
        cout<<" constructor called "<<endl;
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
    cout<<"hiii"<<endl;
    Hero a; 
    cout<<"hello"<<endl;

    //dynamically
    Hero *h = new Hero;  //or Hero();
    
    
    return 0;
}
//constructor - object creation ke tym pe invoke hota hai ,no return type, 
//no i/p parameter