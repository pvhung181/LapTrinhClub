#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

  void insertionSort(pair<ll,ll> a[],ll n)
  {
  	for(int i=1;i<n/2;i++)
  	{
  		ll x=a[i].first,tmp=a[i].second, pos=i-1;
	  
	while(pos>=0 && x < a[pos].first)
	{
		a[pos+1].first=a[pos].first;
		a[pos+1].second=a[pos].second;
		pos--;
	}
	a[pos+1].first=x;
	a[pos+1].second=tmp;
	int dem=0;
	for(int i=1;i<n/2;i++)
	  	if(a[i].first>a[i-1].first) dem++;	  	
	if(dem==n/2) break;
}
    for(int i=0;i<n;i++)
       cout<<"("<<a[i].first<<','<<a[i].second<<")"<<" ";
    cout<<endl;
  	for(int i=1;i<n/2;i++)
  	{
  		ll x=a[i].second,tmp=a[i].first, pos=i-1;
	  
	while(pos>=0 && x > a[pos].second)
	{
		a[pos+1].first=a[pos].first;
		a[pos+1].second=a[pos].second;
		pos--;
	}
	a[pos+1].second=x;
	a[pos+1].first=tmp;
	int dem=0;
	for(int i=1;i<n/2;i++)
	  	if(a[i].second<a[i-1].second) dem++;	  	
	if(dem==n/2) break;
}
    for(int i=0;i<n;i++)
        cout<<"("<<a[i].first<<','<<a[i].second<<")"<<" ";
}


int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    pair<ll,ll> a[n];
    for(int i=0;i<n;i++)
	     cin>>a[i].first>>a[i].second;
	insertionSort(a,n);
}


