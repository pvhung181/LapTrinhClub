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
    int n; cin >> n;
	int cnt = 1;
   	int matrix[n + 1][n + 1];
	int c1 = 1, c2 = n, h1 = 1, h2 = n;
	while(h1 <= h2 && c1 <= c2)
	{
		for(int i = c1; i <= c2; i++)
		{
			matrix[h1][i] = cnt;
			cnt++;
		}
		h1++;
		for(int i = h1; i <= h2; i++)
		{
			matrix[i][c2] = cnt;
			cnt++;
		}
		c2--;
		if(c1 <= c2)
		{
			for(int i = c2; i >= c1; i--)
			{
				matrix[h2][i] = cnt;
				cnt++;
			}
			h2--;
		}
		if(h1 <= h2)
		{
			for(int i = h2; i >= h1; i--)
			{
				matrix[i][c1] = cnt;
				cnt++;
			}
			c1++;
		}
		}
		for(int i = 1; i <= n; i++)
		{
		    for(int j = 1; j <= n; j++)
		         cout << setw(10) << matrix[i][j] << ' ';
			cout << endl;
		}
	return 0;
}


