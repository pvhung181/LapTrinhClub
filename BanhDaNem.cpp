#include<iostream>
using namespace std;
int main ()
{
   int  n;
   int dem=0;
   cin >> n;
   do{
   	n=n-9;
   	dem++;
   }while(n>0);
   cout << dem;
}

