//example-1

#include <iostream>
using namespace std;
class abstraction {
  public:
    int a, b;

  public:
    // method to set value of private members
    void value(int x, int y){
        a = x;
        b = y;
    }
    void display(){
        cout << "The value of a = " << a << endl;
        cout << "The value of b = " << b << endl;
    }
};

int main() {
    abstraction obj;
    obj.value(2, 4);
    obj.display();

  return 0;
}

//example -2  data abstraction in header files.
/*

#include <iostream>
#include <math.h>
using namespace std;

int main() {

    int n = 2;
    int power = 3;
    
    // pow(n, power) is the power function
    int result = pow(n, power);

    cout << "Cube of n = " << result;

    return 0;
}

*/