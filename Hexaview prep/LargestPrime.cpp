#include <bits/stdc++.h>
#include <iostream>
using namespace std;

bool Isprime(string s)
{
	int n = stoi(s);
	if (n <= 1)
		return false;

	// Check from 2 to n-1
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return false;
	}
	return true;
}
int longprime(int a)
{
	// convert the number to a string
	string d = to_string(a);
	int n = d.length();
	int maxi = INT_MIN;
	for (int i = 0; i < n; i++) {
		for (int len = 1; len <= n - i; len++) {
			
			// calculate the substrings of the string
			string p = d.substr(i, len);
			
			// pass the substring to the prime check
			// function
			if (Isprime(p)) {
				int l = stoi(p);
				
				// store the maximum value of the prime
				// substring
				maxi = max(maxi, l);
			}
		}
	}
	return maxi;
}
// Driver Code
int main()
{

	long long int n = 12691;
	int k = longprime(n);
	cout << k;
	return 0;
}
