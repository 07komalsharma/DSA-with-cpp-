#include<iostream>
#include<vector>

using namespace std;

int main(){
	
  vector<int> v;
  
  //vector<int> a(5,1);   //all elements initialize with 1
  
  vector<int> last(a);
  
  cout<<"print a"<<endl;
  for(int i=0;i<a.size();i++){
  	cout<<a[i]<<" ";
  	
  }
  
  cout<<"capacity-> "<<v.capacity()<<endl;
  
  v.push_back(1);
  cout<<"capacity-> "<<v.capacity()<<endl;
  
  v.push_back(2);
  cout<<"capacity-> "<<v.capacity()<<endl;
  
   v.push_back(3);
   cout<<"capacity-> "<<v.capacity()<<endl;
   
   cout<<"size-> "<<v.size()<<endl;
   
   cout<<"front"<<v.front()<<endl;
   cout<<"back"<<v.back()<<endl;
   
}
