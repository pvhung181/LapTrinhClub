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
    ll n; cin>>n;
	ll a[n];
	for(int i=0;i<n;i++)
	   cin>>a[i];
	ll m; cin>>m;
	ll b[m];
     for(int i=0;i<m;i++)
        cin>>b[i];
	ll i=0,j=0,st=0,store[n+m];
	while(i<n && j<m)
	{
		if(a[i]<=b[j])
		{
			store[st++]=a[i];
			i++;
		}else{
			store[st++]=b[j];
			j++;
		}
	 } 
	while(i<n)
	   store[st++]=a[i++];
	while(j<m)
	   store[st++]=b[j++];
	for(int i=0;i<n+m;i++)
	   cout<<store[i]<<' ';
}


