#include<bits/stdc++.h>
using namespace std;

int LargeEle(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-1];
}

int main(){
    vector<int> arr1={9,22,3,1,7,5};
    vector<int> arr2={44,29,50,65};

    cout<<"largest element in array "<<LargeEle(arr1)<<endl;
    cout<<"largest element in array "<<LargeEle(arr2);


}

/*

int findLargestElement(int arr[], int n) {
 
  int max = arr[0];
  for (int i = 0; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }
  return max;
}
int main() {
  int arr1[] = {2,5,1,3,0};
  int n = 5;
  int max = findLargestElement(arr1, n);
  cout << "The largest element in the array is: " << max << endl;
 
  int arr2[] =  {8,10,5,7,9};
  n = 5;
  max = findLargestElement(arr2, n);
  cout << "The largest element in the array is: " << max<<endl;
  return 0;
}
*/