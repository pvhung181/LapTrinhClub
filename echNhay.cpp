#include<stdio.h>
#include<math.h>

typedef unsigned long long ull;
typedef long long ll;

int max(ll num1, ll num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int sol(int n) {
	ll fog[n]; 
	for(int i = 0; i < n; i++) scanf("%lli", &fog[i]);
	int index = 0;
	for(ll maximum = 0;index < n && index <= maximum; index++)
	    maximum = max(maximum, fog[index] + index );
	return (index == n) ? 1 : 0;
}

int main()
{
	int t; scanf("%d", &t);
	while(t--) {
		int n; scanf("%d",&n);
		if(sol(n) == 1) printf("True\n");
		else printf("False\n");
    }
}

