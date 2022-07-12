#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool kiemTra(ll x)
{
	if(x<2)
	  return false;
	for(int i=2;i<=(float)sqrt(x);i++)
	{
		if(x%i==0)
		  return false;
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    ll a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    for(int i=0;i<n;i++)
    {
    	if(kiemTra(a[i])) 
		     cout<<a[i]<<' ';
    	else continue;
	}
}


