#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t; cin >> t;
    ll n;
    while(t--)
    {
    	cin >> n;
    	ll x = 2015 - n;
    	if(x > 0) cout << x <<" A.D."<<endl;
    	else{
    		cout << abs(x) + 1 << " B.C." << endl;
		}
	}
}


