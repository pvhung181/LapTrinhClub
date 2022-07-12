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
const ll N = 1e5 + 5;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

void sol()
{
   	ll n; cin >> n;
    ll nums[n];
    for(int i = 0; i < n; i++)
   	   cin >> nums[i];
   	vector<ll> lis;
   	lis.push_back(nums[0]);
   	for(int i = 1; i < n; i++)
   	{
   	   if(nums[i] > lis.back()) lis.push_back(nums[i]);
	   else
	   {
	   	auto it = lower_bound(lis.begin(), lis.end(), nums[i]);
	   	*it = nums[i];
		}	
	}
	cout << lis.size();
} 

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    sol();
}


