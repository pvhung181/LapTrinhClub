#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     int t; cin >> t;
     ll n, m, k;
     while(t--)
     {
     	cin >> n >> m >> k;
     	ll soChai = n / m;
     	ll soNap = soChai;
     	ll tong = soChai;
     	ll du ;
     	while(soNap >= k)
     	{
     		soChai =  (soNap / k);
     		du = soNap % k;
     		soNap = soChai + du;
     	    tong = tong + soChai;
		}
		cout << tong << endl;
	 }
	 
}


