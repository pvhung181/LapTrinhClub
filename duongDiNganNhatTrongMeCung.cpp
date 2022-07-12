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

bool check(int x, int y, int n, int m)
{
	return x > 0 && y > 0 && x <= n && y <= m;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, m; cin >> n >> m;
    int a[n + 1][m + 1];
    for(int i = 1; i <= n; i++)
       for(int j = 1; j <= m; j++)
          cin >> a[i][j];
    int xCat, yCat, xMouse, yMouse;
    cin >> xCat >> yCat >> xMouse >> yMouse;
    queue<pair<int,int>> q;
    map<pair<int,int>, int> mp;
    q.push({xCat,yCat});
    mp[{xCat, yCat}] = 0;
    int dx[4] = {0,1,0,-1};
	int dy[4] = {1,0,-1,0}; 
    while(q.size())
    {
    	int x = q.front().fi;
    	int y = q.front().se;
    	q.pop();
    	if(x == xMouse && y == yMouse)
    	{
    		cout << mp[{x,y}];
    		return 0;
		}
		
		for(int i = 0; i < 4; i++)
		{
			int xC = x + dx[i];
			int yC = y + dy[i];
			if(check(xC,yC,n,m) && mp.find({xC,yC}) == mp.end() && a[xC][yC] == 0)
			{
				q.push({xC,yC});
			    mp[{xC,yC}] = mp[{x,y}] + 1;
			}
		}
	}
	cout << -1;
}
