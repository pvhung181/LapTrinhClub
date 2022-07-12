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



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int a[] = {0,1,2,5};
    queue<ll> q;
    q.push(1);
    q.push(2);
    q.push(5);
    while(1)
    {
    	ll res = q.front();
    	q.pop();
    	if(res > 999999999) break;
    	if(res % n == 0) cout << res << endl;
    	for(int i = 0; i < 4; i++)
    	{
    		ll tmp = res * 10 + a[i];
    			q.push(tmp);
		}
	}
}


