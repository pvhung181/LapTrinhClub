#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

typedef struct hcn{
   ll l, w, s;
   bool  operator < (hcn other)
   	{
   		return s > other.s;
	   }

};

int main()
{
    int n; cin >> n;
    hcn a[n];
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i].l >> a[i].w;
    	a[i].s = a[i].l * a[i].w;
	}
	sort(a,a + n);
    int cnt = 0, j = 1;
    while(j < n )
    {
    	int i = 0;
    	if(a[i].s != a[j].s){
    		cnt++;
    		break;
		}
		j++;
	}
	if(cnt == 0) cout << "NO";
	else
	{
		int max = INT_MIN;
		for(int i = 0; i < n; i++)
		{
			if(a[i].s > max)
			    max = a[i].s;
		}
		for(int i = 0; i < n; i++)
		{
			if(a[i].s < max)
			{
				cout << a[i].l << ' ' << a[i].w;
				break;
			}
		}
	}
}
