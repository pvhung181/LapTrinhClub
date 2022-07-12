#include<stdio.h>
long long int gt(int n)
{
	if(n==1)
	   return 1;
	else
	  return n*gt(n-1);
}
int main()
{
     int n;
     scanf("%d",&n);
     printf("%lli",gt(n));
}


