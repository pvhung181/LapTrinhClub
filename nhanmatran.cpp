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

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int m, n, p; cin >> m >> n >> p;
    int a[m][n],b[n][p];
    for(int i = 0; i < m; i++)
        for(int j = 0; j < n; j++)
           cin >> a[i][j];
    for(int i = 0; i < n; i++)
       for(int j = 0; j < p; j++)
           cin >> b[i][j];
    ll c[m][p];
    int  bc = 0;
    ll res;
    for(int i = 0; i < m; i++)
    {
    	for(int j = 0; j < p; j++)
    	{
    	
    	    res = 0;
    		for(int k = 0; k < n; k++)
    			res += (a[i][k] * b[k][bc]);
			c[i][j] = res;
			bc++;
		}
		bc = 0;
	}
	 for(int i = 0; i < m; i++)
    {
    	for(int j = 0; j < p; j++)
    	{
    		cout << setw(10) << c[i][j];
		}
		cout << endl;
	}
}


