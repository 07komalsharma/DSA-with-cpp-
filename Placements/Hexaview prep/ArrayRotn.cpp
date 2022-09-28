#include <bits/stdc++.h>
using namespace std;

void Rotate(int arr[], int m, int n)
{
	// Storing rotated version of array
	int temp[n];

	// Keepig track of the current index// of temp[]
	int k = 0;

	// Storing the n - m elements of// array arr[] to the front of temp[]
	for (int i = m; i < n; i++) {
		temp[k] = arr[i];
		k++;
	}
	// Storing the first m elements of array arr[]// into temp
	for (int i = 0; i < m; i++) {
		temp[k] = arr[i];
		k++;
	}
	// Copying the elements of temp[] in arr[]
	// to get the final rotated array
	for (int i = 0; i < n; i++) {
		arr[i] = temp[i];
	}
}

// Function to print elements of array
void PrintTheArray(int arr[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}

// Driver code
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);
	int d = 2;

	// Function calling
	Rotate(arr, d, N);
	PrintTheArray(arr, N);

	return 0;
}
