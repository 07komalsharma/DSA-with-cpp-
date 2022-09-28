#include <bits/stdc++.h>
using namespace std;

int sumdigit(int n)
{
	if (n == 0)
	return 0;
	return (n % 10 + sumdigit(n / 10));
}

// Driven code
int main()
{
	int n = 12345;
	int result = sumdigit(n);
	cout << "Sum of digits in "<< n
	<<" is "<<result << endl;
	return 0;
}
