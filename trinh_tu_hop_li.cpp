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
    int n; cin >> n;
    int tmp = 0;
    int plus = 0; int cmp = 1;
    for(int i = 1; i<= n; i++)
    {
    	cmp += plus;
    	cout << i << ' ' << cmp << ' ' << i * cmp << endl;
    	++cmp;
    	cout << i << ' ' << cmp << ' ' << i * cmp - tmp << endl;
    	tmp++;
    	plus+=2;
	}
}
