#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

typedef  struct {
	int x,y;
};

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ull s = 0;
    ll n ; cin >> n;
    int a[n];
    for(ll i = 1; i <= n; i++)
    	cin >> x[i] >> y[i];
    for(ll i = 1; i < n; i++)
	   for(ll j = i + 1 ; j <= n; j++)
	      {
	      	if(x[i] == x[j] && y[i] == y[j]) continue;
	      	s += kc(x[i],y[i],x[j],y[j]);
		  }
	cout << s;	
}


