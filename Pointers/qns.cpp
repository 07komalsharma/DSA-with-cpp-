#include<iostream>
using namespace std;


    /*...1st...
    int first=0;
    int second =10;           //ans: 0 9
    int *ptr=&second;

    *ptr=9;
    cout<<first<<" "<<second<<endl;
    */
    
    /*...2nd...
    int first=6;
    int *p=&first;        //ans:7
    int *q=p;
    (*q)++;
    cout<<first<<endl;
*/

/*...3rd...
   int first=8;
   int *p=&first;         //ans: 8 9
   cout<<(*p)++<<" ";
   cout<<first<<endl;
*/

/*...4th ...
int *p=0;
int first=110;  //ans:110
p=&first;
cout<<*p<<endl;
*/

/*...5th..
int first=8;
int second=11;
int *third=&second;    //ans: 11 13
first=*third;
*third=*third+2;

cout<<first<<" "<<second<<endl;
*/

/* 6th.....
float f=12.5;
float p=21.5;
float *ptr=&f;
(*ptr)++;
*ptr=p;
cout<<*ptr<<" "<<f<<" "<<p<<endl;   //ans:21.5 21.5 21.5
*/

/* 7th.....
int arr[5];
int *ptr;                   //ans:20 4
cout<<sizeof(arr)<<" "<<sizeof(ptr)<<endl;
 */

/* 8th.....
int arr[]={11,21,13,14};             //ans:11 21
cout<<*(arr)<<" "<<*(arr+1)<<endl;
*/


/*9th.......
int arr[6]={2,3,4};
cout<<arr<<" "<<&arr<<" "<<&arr[0]<<endl;  //they all print same address.... 
*/

/*..10th.
int arr[3]={6,7,8};
cout<<(arr+1)<<endl;
*/

/*....11th
int arr[5]={1,5,6,8,9};
int *p=arr;               //ans:6
cout<<p[2]<<endl;
*/

/*12th...
int arr[5]={11,21,31,41};
int *ptr=arr++;            //eror
cout<<*ptr<<endl;
*/

/*13th...
char ch='a';
char *ptr=&ch;
ch++;
cout<<*ptr<<endl;
*/

/*14th..
char arr[]="abcdef";
char *p=&arr[0];    //ans: abcdef
cout<<p<<endl;
*/

/* 15th..
char str[]="komal";
char *p = str;              //ans: k k
cout<<str[0]<<" "<<p[0]<<endl;
*/

/* 16th
void update(int *p){
    *p = (*p) * 2;
}

int main(){
    int i=10;           //ans: 20
    update(&i);
    cout<<i<<endl;

*/


/* 17th.....
int first=110;
int *p=&first;
int **q=&p;                      //ans:111 119
int second=(**q)++ +9;
cout<<first<<" "<<second<<endl;
*/

/*18th...
int main(){

int first=100;
int *p=&first;
int **q=&p;
int second= ++(**q);
int *r=*q;
++(*r);
cout<<first<<" "<<second<<endl;
*/

void increment(int **p){
    ++(**p);
}
int main(){
    int num=110;
    int *ptr=&num;
    increment(&ptr);
    cout<<num<<endl;


return 0;
}