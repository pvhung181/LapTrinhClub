#include<stdio.h>

typedef long long ll;

int main()
{
    ll n, dem = 0; scanf("%lli",&n);
    ll a[n+1];
    for(ll i = 1; i <= n ; i++)
         scanf("%lli",&a[i]);
    ll st = a[1], sp = 0;
    for(ll i = 1; i <= n; i++)
       	sp+=a[i];
    for(ll i = 1; i<=n ; i++)
    {
    	if(i > 1)
       {
       	st += a[i];
    	sp -= a[i-1];
	   }
    	if(st == sp)
    	  {
    	  	printf("%lli ",i);
    	  	dem++; 
		  }
	}
	printf("\n%lli",dem);
}


