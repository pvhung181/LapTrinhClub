#include<stdio.h>

typedef long long ll;

int main()
{
    ll n, dem = 0; scanf("%lli",&n);
    ll a[n+1];
    for(ll i = 1; i <= n ; i++)
         scanf("%lli",&a[i]);
    ll st = 0, sp = 0;
    for(ll i = 2; i <= n; i++)
       	sp+=a[i];
    for(ll i = 1; i<=n ; i++)
    {
    	if(i > 1)
       {
       	st += a[i-1];
    	sp -= a[i];
	   }
    	if(st == sp)
    	  {
    	  	printf("%lli\n",i);
    	  	dem++; 
		  }
	}
	printf("%lli",dem);
}


