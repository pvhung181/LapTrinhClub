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
    ll a[n];
    for(ll &t:a) cin >> t;
    sort(a,a+n);
    ll max = a[n-1], min = a[0];
    if(max==0 && min ==0) {
    	cout<<0; 
		return 0;
	}
    if(min > 0) {
    	cout<<a[n-1]*a[n-2];
    		return 0;
	}
    if(min < 0)
    {
    	if(max < 0){
    		 cout << a[0] * a[1];
    		return 0;
		}
    	else
    	{
    		ll max1 = a[0] * a[1];
    		for(int i = 1; i < n - 1; i++)
    		{
    			if(max1 < a[i] * a[i+1])
    			   max1 = a[i] * a[i+1];
			}
			cout << max1;
		}
	}
}


