#include<iostream>
using namespace std;

int main(){
   /*  int num=1;
	 while(1){
	 	switch(num){
	 		case 1:cout<<"yes"<<endl;
	 		       break;
	 		case 2:cout<<"noo"<<endl;
			       break;       
		 }
		 exit(0);
	 }	
}*/
   int a,b;
   char op;
   
   cout<<"enter the value of a "<<endl;
   cin>>a;
   cout<<"enter the value of b"<<endl;
   cin>>b;
   cout<<"enter operations you want to perform"<<endl;
   cin>>op;
   
    switch(op){
   	    case '+':cout<<(a+b)<<endl;
   	                break;
   	    case '-':cout<<(a-b)<<endl;
   	                break;
   	    case '/':cout<<(a/b)<<endl;
   	                break;
   	    case '%':cout<<(a%b)<<endl;
   	                break;
		case '*':cout<<(a*b)<<endl;
   	                break;
   	              
   	    default:cout<<"please enter a valid operation"<<endl;		               
}
   return 0;	   
   }
   
   
   
   
   
   
   
   
   










