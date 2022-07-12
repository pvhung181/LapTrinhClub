#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef double d;
typedef long double ld;

const ll MOD = 1e9 + 7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin>>t;
   while(t--)
   {
   	ull x; cin >> x;
   	ull a[x+1]; a[1] = 1;
   	ull s = 1;
   	if(x==1)
	   {
	   	cout<<a[1]<<endl;
	   	continue;
		} 
   	for(int i=2;i<=x;i++)
   	{
   		a[i] = a[i-1] + i;
   		s = (s%mod + a[i]%mod)%mod;
    }  
	cout<<s<<endl;
   }
   return 0;
}



