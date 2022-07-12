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
int n;
void Try(int k)
{
	for(int i = 1; i <= 3; i++)
	{
		sum += i;
		if(sum == n){
			cnt++;
			sum -= i;
			return;
		}
		if(sum > n)
		{
			sum -= i;
			return;
		}
		Try(k + 1);
		sum -= i;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	 cin >> n;
   Try(1);
   cout << cnt;
}


