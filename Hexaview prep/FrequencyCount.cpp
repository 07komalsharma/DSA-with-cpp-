#include <iostream>
using namespace std;
//single char count-
int main() {
   char str[100] = "i am komal";
   char ch = 'a';
   int count = 0;
   for(int i = 0; str[i] != '\0'; i++) {
      if(str[i] == ch)
      count++;
   }
   cout<<"Frequency of alphabet "<<ch<<" in the string is "<<count;
   return 0;
}
//every char count
int main() {
   char str[100] = "hello there";
   int i = 0, alphabet[26] = {0}, j;
   while (str[i] != '\0') {
      if (str[i] >= 'a' && str[i] <= 'z') {
         j = str[i] - 'a';
         ++alphabet[j];
      }
      ++i;
   }
   cout<<"Frequency of all alphabets in the string is:"<<endl;
   for (i = 0; i < 26; i++)
   cout<< char(i + 'a')<<" : "<< alphabet[i]<< endl;
   return 0;
}