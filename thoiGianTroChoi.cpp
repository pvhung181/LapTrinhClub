#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;
const ll N = 1e5 + 5;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   long n, a[]={100, 50, 20, 10, 5, 2, 1};
	scanf("%ld",&n);
		printf("%ld\n",n);
	for(int i=0;i<=6;i++)
	  {
	  	  printf("%ld to R$ %d,00\n",n/a[i],a[i]);
		  n=n%a[i];
	  }
}
