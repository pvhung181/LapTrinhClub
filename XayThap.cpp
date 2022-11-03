#include<stdio.h>
int main ()
{
    long int n,s;
	scanf("%li",&n);
	s = n + (n*(n-1));
	printf("%li",s);
}

