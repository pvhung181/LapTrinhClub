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

bool check(ll n)
{
		string str = to_string(n);
		ll cnt4 = 0, cnt7 = 0;
		for(char x:str)
		{
				if(x == '4') cnt4++;
				else cnt7++;
		}
	if(cnt4 == cnt7) return 1;
	else return 0;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a[] =  {4,7};
    ll n; cin >> n;
    queue<ll> q;
    q.push(44);
    q.push(47);
    q.push(74);
    q.push(77);
    while(q.size())
    {
    	ll x = q.front();
    	q.pop();
    	if(x >= n && check(x) )
		{
			cout << x;
			return 0;
		}
		for(int i = 0; i < 2; i++)
		{
			ll tmp = x * 10 + a[i];
			q.push(tmp);
		}
	}
}
