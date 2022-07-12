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
    ll n; cin >> n;
	int a[n];
	for(int &x:a) cin >> x;
	ll max_res = 0, max_subarr = INT_MIN;
	for(int x:a)
	{
		max_res += x;
		if(max_res > max_subarr)
		   max_subarr = max_res;
		if(max_res < 0)
		   max_res = 0;
	 } 
	cout << max_subarr;
}


