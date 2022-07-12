#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

int prime[1000001];

void sangEratosthenes()
{
	for(int i = 0; i <= 1e6; i++)
	    prime[i] = 1;
	prime[0] = prime[1] = 0;
	for(int i = 2; i <= 1000; i++)
	     if(prime[i])
	     {
	     	for(int j = i * i; j < 1e6; j+=i)
	     	     prime[j] = 0;
		 }
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   int t; cin >> t;
   sangEratosthenes();
   while(t--)
   {
   	ll cnt = 0;
   	ll l, r; cin >> l >> r;
    for(int i = l; i <= r; i++)
        if(prime[i]) cnt++;
	cout << cnt << endl;
   }
}
