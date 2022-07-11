#include<bits/stdc++.h>
using namespace std;
/*
void CountFreq(int arr[],int n){
    vector<bool> visited(n,false);

   for(int i=0;i<n;i++){

        if(visited[i]==true){
            continue;
        }

    int count=1;
    for(int j=i+1;j<n;j++){
        if(arr[i]==arr[j]){
            visited[j]=true;
            count++;
        }
     }
    cout<<"count of "<<arr[i]<<" is : "<<count<<endl;
        
    }
   
    
}

int main(){
    int arr[]={10,5,10,15,10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    CountFreq(arr,n);

    return 0;
}
*/
//approach 2
void Frequency(int arr[],int n){

  unordered_map<int,int> map;

  for(int i=0;i<n;i++){
    map[arr[i]]++;
  }

  //Traverse through map and print frequencies
  for(auto x : map)
    cout<<x.first<<" "<<x.second<<endl;

}
int main(){
    int arr[] = {10,5,10,15,10,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    Frequency(arr,n);

    return 0;
}