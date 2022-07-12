#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    map<ll,ll> m;
    ll n; cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	m[a[i]]++;
	}
	ll cmp,max = 0;
	for(auto it:m)
		if(it.second > max)
			max=it.second;
	cout<<max<<endl;
	for(auto it:m)
	   if(it.second == max)
		    cout<<it.first<<' ';

}


