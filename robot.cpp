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
    queue<pair<int,int>> q;
    map<pair<int,int>,int> m;
    int x, y; cin >> x >> y;
    q.push({x,y});
    m[{x,y}] = 0;
    while(q.size())
    {
    	int tmpX = q.front().fi;
    	int tmpY = q.front().se;
    	q.pop();
    	m[{tmpX,tmpY}]++;
    	if(m[{tmpX,tmpY}] == 3) break;
    	if(tmpY % 2 != 0) q.push({(tmpY + 1) / 2, tmpX});
		if(tmpX % 2 == 0) q.push({tmpY, tmpX / 2});
	}
	cout << m.size();
}


