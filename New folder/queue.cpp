#include<iostream>
#include<queue>
using namespace std;
int main(){
	queue<string> q;
	
	q.push("komal");
	q.push("sharma");
	q.push("kumari");   
	                       //FIFO RULE: FIRST IN FIRST OUT..
	                       //Here Every operation complexity is O(1)..
	cout<<"size before pop operation"<<q.size()<<endl;  
	                     
	cout<<"First Element->"<<q.front()<<endl;
	q.pop();
	
	cout<<"First Element->"<<q.front()<<endl;
	
	cout<<"size after pop operation"<<q.size()<<endl;
}
