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
   int n,k,m,f,s; cin >> n >> k >> m >> s >> f;
   ll cnt = 0;
   while(s != f)
   {
   	if(s < f)
   	{
   		s+=k;
   		cnt++;
	}
   	if(s > f)
   	{
   		s-=m;
   		cnt++;
	}
	if(cnt > 100)
	{
		cout << -1;
		return 0;
	}
   }
   cout << cnt;
}


