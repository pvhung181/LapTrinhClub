#include<bits/stdc++.h>

#define endl "\n"
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
    ll n, k; cin >> n >> k;
	ll a[n]; for(ll &x:a) cin >> x;
	stack<ll> st;
	ll cnt = 0;
	for(ll i = 0; i < n; i++)
	{
		if(cnt < k)
		{
			st.push(a[i]);
			cnt++;
		}
		if(cnt == k || i == n - 1)
		{
			while(!st.empty())
			{
				cout << st.top() << ' ';
				st.pop();
			}
			cnt = 0;
		}
	} 
}


