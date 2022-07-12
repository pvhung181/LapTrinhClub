#include<bits/stdc++.h>

#define endl "\n"
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; scanf("%d",&t);
    long int a,b;
    while(t--)
    {
    	scanf("%li%li",&a,&b);
    	long int m,d;
    	int x = 1;
         while(1)
    	{
    		ll tmp = pow(10,x);
    		m = a % tmp;
    		d = a /  pow(10,x);
    		x++;
    		if(m * d == b)
    		{
    			printf("%li %li\n",d,m);
    			break;
			}
    		
		}
	}
}
