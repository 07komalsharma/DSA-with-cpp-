#include<iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}

void update(int *p){
   // p=p+1;
   // cout<<"inside"<<p<<endl;
   *p=*p+1;
}

int getSum(int arr[],int n){   //arr[],*arr no difference same hoga mtlab dono ka
    cout<<sizeof(arr)<<endl;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
   /* 
    int arr[5]={1,2,3,4,5};
    char ch[6]="abcde";

    cout<<arr<<endl;
    cout<<ch<<endl;  //prints content of char array..

    char *c=&ch[0]; 
    cout<<c<<endl;  //prints entire string...

*/
int value=5;
int *p=&value;
 
//print(p);

cout<<"before"<<*p<<endl;
update(p);
cout<<"after"<<*p<<endl;
int arr[6]={2,3,4,5,6,7};

cout<<"sum is :"<<getSum(arr+3,3)<<endl;

return 0;
}
