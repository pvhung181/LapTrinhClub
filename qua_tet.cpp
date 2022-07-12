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
    int n, m; cin >> m >> n;
    int a[n];
    for(int &x:a) cin >> x;
    sort(a,a + n);
    int min = INT_MAX;
    for(int i = 0; i <= n - m; i++)
    {
    	int tmp = a[i + m - 1] - a[i];
    	
    	if(min > tmp) min = tmp;
	}
	cout << min;
}
