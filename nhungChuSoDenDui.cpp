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

bool check(int a[],int k, int x)
{
	for(int i = 0; i < k; i++)
	   if(a[i] == x) return false;
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, k; cin >> n >> k;
    int a[k];
    for(int &x:a) cin>> x;
    vector<int> vd;
    for(int i = 0; i <= 9; i++)
    	if(check(a,k,i)) vd.push_back(i);
    queue<ll> q;
    for(int x:vd) q.push(x);
    while(q.size())
    {
    	ll res = q.front();
    	q.pop();
    	if(res >= n)
    	{
    		cout << res;
    		return 0;
		}
		for(int i = 0; i < vd.size(); i++)
		{
			ll tmp = res*10 + vd[i];
			if(tmp != 0) q.push(tmp);
		}
	}
}


