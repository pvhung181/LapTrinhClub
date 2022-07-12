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
    	int n; cin >> n;
    	int res = n / 3;
    	ull s ;
    	if(n % 3 == 1)
    	{
    		s = pow(3, res - 1)  * 4;
    		cout << s << endl;
    		continue;
		}
	   if(n % 3 == 0)
	   {
		s = pow(3, res);
		cout << s << endl;
		continue;
	   }
	   	n = n % 3;
		s = pow(3, res) * n;
		cout << s << endl;
		
	}
}
