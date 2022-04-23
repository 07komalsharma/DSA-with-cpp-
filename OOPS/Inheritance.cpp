#include<bits/stdc++.h>
using namespace std;

class Human{
    protected:
    int height;

    public:
    int weight;

    private:
    int age;

    public:
    int getAge(){
        return this->age;
    }

    int setweight(int w){
        this->weight=w; 
        return 0;
    }
    
};

class Male: protected Human{
    public:
    string color;

    void sleep(){
        cout<<"male is sleeping"<<endl;
    }
     int getHeight(){
        return this->height;
    }
 
};

int main(){
    Male m1;
    cout<<m1.getHeight()<<endl;


    /*
    Male object1;
    cout<<object1.age<<endl;
    cout<<object1.height<<endl;
    cout<<object1.weight<<endl;

    cout<<object1.color<<endl;

    object1.setweight(18);
    cout<<object1.weight<<endl;
    object1.sleep();
*/
return 0;
}