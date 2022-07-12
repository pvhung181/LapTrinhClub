#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int dem = 0;
    while(1)
    {
    	int n; scanf("%d",&n);
    	int a[n];
    	int max = INT_MIN;
    	for(int i = 0; i < n; i++)
    	{
    		scanf("%d",&a[i]);
    		if(max < a[i]) max =a[i];
		}
		if(max < 10) printf("1\n");
		else if(max >= 10 && max < 20) printf("2\n");
		else printf("3\n");
		dem++;
		if(dem==50) break;
	}
}
