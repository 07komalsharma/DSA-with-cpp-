#include <bits/stdc++.h>
using namespace std;
 
int Add(int x, int y)
{
    // Iterate till there is no carry
    while (y != 0)
    {
        // carry should be unsigned to
        // deal with -ve numbers
        // carry now contains common
        //set bits of x and y
        unsigned carry = x & y; // 2 & 3=2 ,1&4=0
 
       
        x = x ^ y;  //2^3=1 ,1^4=5
 
       
        y = carry << 1; //2<<1=4  ,0<<1=0
    }
    return x;
}
 
// Driver code
int main()
{
    cout << Add(2,3);
    return 0;
}