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
    int t; cin >> t;
    while(t--)
    {
    	ll x1, x2, y1, y2, r1, r2; cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    	ld res = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
		if(res > r1 + r2) cout << "roi nhau" << endl;
		else if(res == r1 + r2 ) cout << "tiep xuc" << endl;
		else if(x1 == x2 && y1 == y2 && r1 == r2) cout << "trung nhau" << endl;
		else if(res > abs(r1 - r2) && res < r1 + r2) cout << "cat nhau" << endl; 
		else cout << "chua nhau"<< endl;
	}
}
