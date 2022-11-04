#include<iostream>
using namespace std;
int main ()
{
   long n,tong=0;
   cin>>n;
   for(int i=1;i<=n;i++)
   {
   	if(i<50)
	   tong=tong+100;
   	if(i>=50 && i<1000)
	   tong=tong+500;
   	if(i>=1000 && i<10000)
	   tong=tong+1000;
   	if(i>=10000)
	   tong=tong+1200;
   }
   cout << tong;
}

