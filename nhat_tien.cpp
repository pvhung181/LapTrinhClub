#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k; cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    		ll sum=0;
	if(n>k){
		sort(a,a+n,greater<ll>());
	for(int i=0;i<k;i++)
	   sum+=a[i];
	cout<<sum;
	}else{
		for(int i=0;i<n;i++)
		   sum+=a[i];
		cout<<sum;
	}
}


