#include<iostream>
using namespace std;
int main ()
{
   unsigned int k;long n;
   cin >>n>>k;
   for(int i=1;i<=k;i++){
   	if(n%5==0 && n%2==0)
   	   n=n/10;
   	else
   	   n=n-1;
   }
   cout<<n;
}

