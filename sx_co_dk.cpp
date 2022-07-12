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
    int n; cin>>n;
	int a[n+1],b[n+1],dem=0;
	for(int i=1;i<=n;i++) 
	   cin>>a[i];
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++)
	  {
	  	if(a[i]%3==0)
	   	b[dem++]=a[i];
	  }
	for(int i=1;i<=n;i++)
	  {
	  	 if(a[i]%3==1)
	   	b[dem++]=a[i];
	  }
	for(int i=1;i<=n;i++)
	  {
	  	 if(a[i]%3==2)
	   	b[dem++]=a[i];
	  }
	for(int i=0;i<n;i++)
	   cout<<b[i]<<' ';
}


