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
	int a, b; cin >> a >> b;
	int q = 0;
	if(min(a,b) < 0) q = min(a,b);
	go_back:
	for(int i = 0; i < abs(b); i++)
	{
		if(a - (b * q) == i){
			cout << q << ' ' << i;
			return 0;
		}
	}
	q++;
	goto go_back;
}
