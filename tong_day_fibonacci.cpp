#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double d;
typedef long double ld;

const ll  M=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull n; cin>>n;
    ull f[n+1];
    f[1]=1;f[2]=1;
    ull sum=f[1]+f[2];
    if(n==1 || n==2 )
       cout<<1;
    else
    {
    for(int i=3;i<=n;i++)
    {
    	f[i]=f[i-1]+f[i-2];
    	sum=sum+f[i];
	}
}
      cout<<sum%M;
return 0;
}


