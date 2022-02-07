#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> duplicate(vector<int> &arr1,vector<int> &arr2,int n,int m){
	int i,j;
	i=j=0;
	vector<int> ans;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
		   ans.push_back(arr1[i]);
			i++;
			j++;
		}
		else if(arr1[i]<arr2[j]){
			i++;
		}
		else{
			j++;
		}
	}
}
int main(){
	vector<int> vec1{0,1,4,5,6};
    vector<int> vec2{3,5};
	duplicate(vec1,vec2,5,2);
	
}







