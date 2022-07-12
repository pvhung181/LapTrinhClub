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
    int n, k; cin >> n >> k;
    int a[k];
    for(int i = 0; i < k; i++)
	    cin >> a[i];
    int s, f; cin >> s >> f;
    queue<int> q;
    map<int,int> mp;
    mp[s] = 0;
    q.push(s);
    while(q.size())
    {
    	int x = q.front();
    	q.pop();
    	if(x == f)
    	{
    		cout << mp[x];
    		return 0;
		}
    	for(int i = 0; i < k; i++)
    	{
    		int tmp = x + a[i];
    		if(tmp <= n && tmp > 0 && mp.find(tmp) == mp.end())
    		{
    			q.push(tmp);
    			mp[tmp] = mp[x] + 1;
			}
    		
		}
	}
	cout << -1;
}


