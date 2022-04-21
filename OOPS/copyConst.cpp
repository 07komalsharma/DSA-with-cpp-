#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;
    char *name;
    static int timeToComplete;

    Hero(){
        name=new char[100];
        cout<<"Default/Simple constructor called "<<endl;
    }
     Hero(int health){
       
       this->health=health; 
    }

    Hero(int health,char level){
       this->level=level;
       this->health=health; 
    }

    //copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name=ch;

        cout<<"copy constructor called "<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
     
    void print(){
        cout<<endl;
        cout<<" [ Name : "<<this->name<<" ,";
        cout<<"health : "<<this->health<<" ,";
        cout<<"level : "<<this->level<<"]"<<endl;
        cout<<endl;
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
    void setName(char name[]){
        strcpy(this->name,name);
    }  

    //Destructor
    ~Hero(){
        cout<<"Destructor bhai called "<<endl;
    } 

};

int Hero::timeToComplete=5;

int main(){

    cout<<Hero::timeToComplete<<endl;//right way

    Hero a;
    cout<<a.timeToComplete<<endl; //not recommended
    //Hero suresh(70,'C');
    //suresh.print();

    //Copy Constructor ..
   // Hero R(suresh);
   // R.print();
/*
   Hero hero1;
   hero1.setHealth(12);
   hero1.setLevel('D');
   char name[6]="Komal";
   hero1.setName(name);

   hero1.print();

   //Hero hero2(hero1);
   //hero2.print();

   hero1.name[0]='A';
   hero1.print();

   Hero hero2(hero1);
   hero2.print();
*/
//Hero a;        //static->destructor automatic call hota h

//Hero *b =new Hero();  //destructor manually call krna hoga
//delete b;

}
//copy constructor : object creation time
//copy of object



//static keyword ->aisa data member create krta h joki class pe depend krta hai
//isko object bnane ki need nhi hoti  , this keyword nhi hota .....