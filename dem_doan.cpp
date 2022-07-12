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

typedef struct{
	float x,y;
} point;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n, r; cin >> n >> r;
    float a1, a2; cin >> a1 >> a2;
    point b[n];
    ll cnt = 0;
    for(int i = 0; i < n; i++)
    {
    	cin >> b[i].x >> b[i].y;
    	if(pow(b[i].x - a1,2) + pow(b[i].y - a2, 2) <= r * r) cnt++;	
	}
    cout << cnt * (cnt - 1) / 2;
}
