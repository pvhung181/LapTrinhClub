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
    int n, m; cin >> n >> m;
    char a[n][n], b[m][m];
    for(int i = 0; i < n; i++)
    {
	    cin.ignore();
    	 for(int j = 0; j < n; j++)
        	
        	cin >> a[i][j];
	}
	for(int i = 0; i < m; i++)
    {
	    cin.ignore();
    	 for(int j = 0; j < m; j++)
        	cin >> b[i][j];
	}
	int cnt = 0;
	int cotB, hangB;
	for(int i = 0; i <= n - m; i++)
	{
		for(int j = 0; j <= n - m; j++)
		{
			cnt = 0; 
			cotB = 0, hangB = 0;
			for(int k = i;; k++)
			{
				if(hangB == m) break;
				for(int z = j;; z++)
				{
				if(cotB == m) break;
				if(a[k][z] != b[hangB][cotB]) goto next;
				if(a[k][z] == b[hangB][cotB]) cnt++;
				cotB++;
			    }
			    hangB++;
			    cotB = 0;
				
			}
			if(cnt == pow(m,2))
			{
				cout << "Yes";
				return 0;
			}
			next: continue;
		}
	}
	cout << "No";
	return 0;
}
