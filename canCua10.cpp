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

ld tmp ;

ld can(int n)
{
	if(n == 0) return 0;
	tmp = 1 / (6 + can(n - 1));
	return tmp;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    if(n == 0){
    	cout << fixed << setprecision(10) << 3.0000000000;
    	return 0;
	}
	ld res = 3 + can(n);
    cout << fixed << setprecision(10) << res;
}
