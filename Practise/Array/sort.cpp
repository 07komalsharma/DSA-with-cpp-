#include<bits/stdc++.h>
using namespace std;

int sortarray(vector<int>& arr){
    sort(arr.begin(),arr.end());
    return arr[0];

}

int main(){
    vector<int> arr1 = {2,5,1,0,8};
    vector<int> arr2 = {9,6,4,17,23};

  cout<<"smallest element in the array 1 is : "<<sortarray(arr1)<<endl;
  cout<<"smallest element in the array 2 is : "<<sortarray(arr2);

  return 0;
}
// 2nd approach

/*
int SmallestElement(int arr[], int n) {
 
  int min = arr[0];
  for (int i = 0; i < n; i++) {
    if (min > arr[i]) {
      min = arr[i];
    }
  }
  return min;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int min = SmallestElement(arr1, n);
  cout << "The smallest element in the array is: " << min << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  min = SmallestElement(arr2, n);
  cout << "The smallest element in the array is: " << min;
  return 0;
}

*/