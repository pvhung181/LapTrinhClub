#include<bits/stdc++.h>

#define endl '\n'
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n; scanf("%lli",&n);
    int a[100005];
    for(int i = 1; i <= n; i++)
        scanf("%lli",&a[i]);
    map<ll,ll> mp;
    mp[1] = 0;
    queue<ll> q;
    q.push(1);
    while(q.size())
    {
    	ll x = q.front();
    	q.pop();
    	if(x == n)
    	{
    		printf("%lli",mp[x]);
    		return 0;
		}
	   for(int i = 2; i >= 1; i--)
	   {
	   	ll tmp = x + i;
	   	if(a[tmp] != 1 && tmp <= n)
	   	{
	   		q.push(tmp);
	   		mp[tmp] = mp[x] + 1;
	   		break;
		}
	   }
	}
	printf("khong qua duoc suoi");
}


