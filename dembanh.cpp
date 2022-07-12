#include<iostream>
using namespace std;
int main ()
{
   long int n;
   cin >> n;
   int a[100006];
   int tong=0;
   for (int i=1;i<=n;i++)
   {
   cin >> a[i];
   	tong=tong+a[i];
   }
   while(tong%4!=0)
   {
   	tong++;
   }
   cout << tong/4;
}

