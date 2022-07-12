#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  M=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin>>n;
    pair<ll,ll> c[n];
    for(int i=0;i<n;i++)
    {
    	ll a,b; cin>>a>>b;
    	c[i].first = a;
    	c[i].second = b;
	}
	set<ll> dt;
	for(int i=0;i<n;i++)
		dt.insert(c[i].first*c[i].second);
	for(auto it:dt)
	   cout<<it<<' ';
}

