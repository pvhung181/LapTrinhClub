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
    ll n,dem0 = 0, dem1 = 0; cin >> n;
    int a[n+1];
    for(int i = 1; i<= n; i++)
       {
       	cin >> a[i];
       	if(a[i] == 0) dem0++;
       	if(a[i] == 1) dem1++;
	   }
    if(!dem0)
    {
    	cout<<0;
    	return 0;
	}
	if(!dem1)
	{
		cout<<-1;
		return 0;
	}
	ll ct = a[1];
	for(int i = 2; i <= n ;i++)
	{
		if(a[i] != ct)
		  {
		  	cout << i-1;
		  	return 0;
		  }
	}
}


