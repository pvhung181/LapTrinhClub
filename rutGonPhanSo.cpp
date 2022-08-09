#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it : m)

using namespace std;

typedef long long ll;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

void reduce(int ele, ll *numerator, ll denominator) {
	*numerator = denominator * ele + *numerator;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll numerator = 0, denominator = 0;
    int n; cin >> n;
    int a[105];
    for(int i = 1; i <= n; i++) cin >> a[i];
    numerator = a[n] * a[n - 1] + 1;
    denominator = a[n];
    for(int i = n - 2; i > 0; i--) {
    	swap(numerator, denominator);
    	reduce(a[i],&numerator, denominator);
	}
	
	ll g = _gcd(numerator, denominator);
	numerator /= g;
	denominator /= g;
	cout << numerator << '/' << denominator;
}

