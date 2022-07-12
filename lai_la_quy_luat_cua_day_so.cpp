#include<stdio.h>
typedef unsigned long long ull;
typedef long long ll;
int main()
{
    int t; scanf("%d",&t);
    while(t--)
    {
    	ll n; scanf("%lli",&n);
    	ll s = 0;
		s =  s + (1 + ((n-1)*n)/2);
		printf("%lli\n",s);
	}
}


