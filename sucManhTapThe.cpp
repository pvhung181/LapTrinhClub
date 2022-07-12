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

int n, M;
int power[9][9];
int permutation[9];
int MAX = INT_MIN;
void Try(int k)
{
	if(k > n)
	{
		int s = 0;
		for(int i = 1; i < k; i++)
		    s += (permutation[i] * permutation[i]);
		MAX = max(MAX, s % M);
		return ;
		    
	}
	for(int i = 1; i <= power[k][0]; i++)
	{
		permutation[k] = power[k][i];
		Try(k + 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> M;
    for(int i = 1; i <= n; i++)
    {
    	cin >> power[i][0];
    	for(int j = 1; j <= power[i][0]; j++)
    		cin >> power[i][j];
	}
	Try(1);
	cout << MAX;
}
