#include<iostream>
using namespace std;

class vechicle{
  public:
  string name,fuelType, creation,NewUsed;
  
  public:
    void printDetails(){
      cout<<"Name : "<<name<<endl;
      cout<<"Fuel Type : "<<fuelType<<endl;
      cout<<"Made in India OR Imported : "<<creation<<endl;
      cout<<"New OR Used : "<<NewUsed<<endl;
    }
};


class car: public vechicle{
  public:
   void setCarInfo(string m,string f,string c,string nu){
    name=m; fuelType=f; creation=c;  NewUsed=nu;
  }
  void getCarInfo(){
    cout<<"\n"<<"------ ABOUT CAR ------ "<<endl;
    printDetails();
    return;
  }
  
};


class bike: public vechicle {
  public:
  void setBikeInfo(string m,string f,string c,string nu){
    name=m; fuelType=f; creation=c;  NewUsed=nu;
    
  }
  void getBikeInfo(){
    cout<<"\n"<<"------ ABOUT BIKE ------ "<<endl;
    printDetails();
    return;
  }
  
};

int main(){
  bike b;     //object
  b.setBikeInfo("DUCATI","PETROL","IMPORTED","USED");   
  b.getBikeInfo();
  
  car c;
  c.setCarInfo("HONDA ACCORD","DIESEL","MADE IN INDIA","NEW");
  c.getCarInfo();

}