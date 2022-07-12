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

int dx[8] = {-2, -2, 2, 2, -1, -1, 1, 1};
int dy[8] = {-1, 1, -1, 1, -2, 2, -2, 2};

bool check(int x, int y, int n, int m) {
	return x >= 1 && y >= 1 && x <= n && y <= m;
}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int n, m, x1, y1, x2, y2;
	cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    queue <pair<int, int>> q;
    map <pair<int, int>, int> mp;
    pair<int, int> p;
    mp[{x1, y1}] = 0;
    q.push({x1, y1});
    while(q.size()) {
    	int x = q.front().first;
    	int y = q.front().second;
    	q.pop();
    	if(x == x2 && y == y2) {
    		cout << mp[{x, y}];
    		return 0;
		}
		for (int i = 0; i < 8; ++i) {
			int xt = x + dx[i];
			int yt = y + dy[i];
			if (check(xt, yt, n, m) && mp.find({xt, yt}) == mp.end()) {
				q.push({xt, yt});
				mp[{xt, yt}] = mp[{x, y}] + 1;
			}
		}
	}
	
	cout << "-1";
}


