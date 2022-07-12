#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    map<int,int> m;
    while(t--)
    {
    	m.clear();
    int n; cin >> n;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
        m[i] = 1;
    for(int i = 1; i <= n; i++)
    {
    	for(int j = 1; j <= n; j++)
    	{
    		if(j % i == 0) 
    		{
    			if(m[j] == 1) m[j] = 0;
    			else m[j] = 1;
			}
		}
	}
	for(auto it : m)
		if(it.second == 1) cnt++;
	cout << cnt << endl;
	}
}


