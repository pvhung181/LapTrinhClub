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
    int n; cin >> n;
    int a[n];
    for(int &x:a) cin >> x;
    sort(a,a + n);
    int max = 1;
    int cnt = 1;
    for(int i = 0; i < n - 1; i++)
    {
    	for(int j = i + 1; j < n; j++)
    	{
    		if(abs(a[i] - a[j]) == 1 || abs(a[i] - a[j]) == 0)
				cnt++;
			else
			{
				if(max < cnt) max = cnt;
			    cnt = 1;
				break;	
			}  
			if(j == n - 1)
			{
				if(max < cnt) max = cnt;
				cnt = 1;
				break;
			}
		}
	}
	cout << max;
}
