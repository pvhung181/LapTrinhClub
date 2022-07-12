#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;cin>>t;
	while(t--)
	{
		ll n; cin>>n;
		ull s = 0;
		ll x = 0;
	  for(int i=1;i<=n;)
    {
    	
        s = s + i;
    	i = i + ++x;
	}
		cout<<s<<endl;
	 } 
}


