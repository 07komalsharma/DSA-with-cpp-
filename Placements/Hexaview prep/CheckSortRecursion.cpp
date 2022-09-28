
#include <bits/stdc++.h>
using namespace std;


int SortRecurr(int arr[], int n)
{
	
	if (n == 1 || n == 0)
		return 1;


	if (arr[n - 1] < arr[n - 2])
		return 0;

	// Last pair was sorted
	// Keep on checking
	return SortRecurr(arr, n - 1);
}

// Driver code
int main()
{
	int arr[] = { 12,25,45,10,46 };
	int n = sizeof(arr) / sizeof(arr[0]);
	if (SortRecurr(arr, n))
		cout << "Yes\n";
	else
		cout << "No\n";
}
