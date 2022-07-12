#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

int main()
{
     map<ll,ll> m;
     ll n; cin>>n;
     ll a[n+1];
     for(int i=1;i<=n;i++)
     {
       cin>>a[i];
       m[a[i]]++;
	 }
	 ll ans = 0;
    for (auto it:m)
    {
        ll count = it.second;
        ans += (count * (count - 1))/2;
    }
    cout << ans;
	 return 0;
}


