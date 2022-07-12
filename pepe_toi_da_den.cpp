#include<bits/stdc++.h>

#define endl "\n"
#define f first
#define s second

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
	int h, m, o;
	string str1 = " - Canh cua mo ra!";
	string str2 = " - Canh cua dong lai!";
	while(t--)
	{
	    cin >> h >> m >> o;
	    if(h < 10)
	        cout <<"0" << h << ":";
	    else cout  << h << ":";
	    if(m < 10) cout << "0" << m;
	    else cout << m;
	    if(o == 1) cout << str1 << endl;
	    else cout << str2 << endl;
	}
}


