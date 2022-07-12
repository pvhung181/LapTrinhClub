#include<iostream>

#include<cstring>
using namespace std;
int main ()
{
   int dem=0;
   char str[10000];
   gets(str);
   for(int i=1;i<strlen(str);i++)
   {
   	if(str[i]==str[0])
   	  dem++;
   }
   cout<<dem;
}

