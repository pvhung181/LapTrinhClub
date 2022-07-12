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

string str;
char permutation[15];
bool used[15] = {};
map<string,int> mp;
void Try(int k)
{
	if(k >= str.length())
	{
		string tmp = "";
		for(int i = 0; i < str.length(); i++) tmp += permutation[i];
	    mp[tmp] = 1;
	}
	for(int i = 0; i < str.length(); i++)
	{
		if(!used[i])
		{
			used[i] = true;
			permutation[k] = str[i];
			Try(k + 1);
			used[i] = false;
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> str;
	Try(0);
	for(auto x:mp) cout << x.fi << endl;
}
