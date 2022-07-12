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

int dx[] = {-2,-2,-1,1,2,2,-1,1};
int dy[] = {1,-1,-2,-2,-1,1,2,2};


bool check(int x, int y, int n)
{
	return x <= n && x > 0 && y <= n && y > 0;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int xMa1, yMa1, xMa2, yMa2; cin >> xMa1 >> yMa1 >> xMa2 >> yMa2;
    int xDich, yDich; cin >> xDich >> yDich;
    queue<pair<int,int>> q1, q2;
    map<pair<int,int>,int> m1, m2;
    q1.push({xMa1,yMa1});
    q2.push({xMa2,yMa2});
    m1[{xMa1,yMa1}] = 0;
    m2[{xMa2,yMa2}] = 0;
    int max1 = 0, max2 = 0;
    while(q1.size())
    {
    	int x = q1.front().fi;
    	int y = q1.front().se;
    	q1.pop();
    	if(x == xDich && y == yDich)
    	{
    		max1 = m1[{x,y}];
            break;
		}
		for(int i = 0; i < 8; i++)
		{
			int xtmp = x + dx[i];
			int ytmp = y + dy[i];
			if(check(xtmp,ytmp,n) && m1.find({xtmp,ytmp}) == m1.end())
			{
				q1.push({xtmp,ytmp});
				m1[{xtmp,ytmp}] = m1[{x,y}] + 1;
			}
		}
	}
	 while(q2.size())
    {
    	int x = q2.front().fi;
    	int y = q2.front().se;
    	q2.pop();
    	if(x == xDich && y == yDich)
    	{
    		max2 = m2[{x,y}];
            break;
		}
		for(int i = 0; i < 8; i++)
		{
			int xtmp = x + dx[i];
			int ytmp = y + dy[i];
			if(check(xtmp,ytmp,n) && m2.find({xtmp,ytmp}) == m2.end())
			{
				q2.push({xtmp,ytmp});
				m2[{xtmp,ytmp}] = m2[{x,y}] + 1;
			}
		}
	}
    if(max1 < max2) (max1 == 0) ? cout << 2 : cout << 1;
    else if(max1 > max2) (max2 == 0) ? cout << 1: cout << 2;
    else cout << 0;
    cout << endl;
    if(max1 == 0) cout << -1 << ' ';
    else cout << max1 << ' ';
    if(max2 == 0) cout << -1;
    else cout << max2;
    
}


