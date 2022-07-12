#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;
int cnt  = 0;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

int sum = 0;
int n, M;
int MAX = INT_MIN;
int pack[25];
bool used[1005] = {};
void Try(int k)
{
	for(int i = 1; i <= n; i++)
	{
		if(!used[i])
		{
		   used[i] = true;
	       sum += pack[i];
	    if(sum == M)
	    {
	    	MAX = sum;
	    	sum -= pack[i];
	    	return;
		}
		if(sum > M)
		{
			sum -= pack[i];
			MAX = max(MAX,sum);	
			used[i] = false;
			continue;
		}
		Try(k + 1);
		sum -= pack[i];
	    used[i] = false;
    	}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	 cin >> n >> M;
	 for(int i = 1; i <= n; i++) cin >> pack[i];
   Try(1);
   cout << MAX;
}
