#include<bits/stdc++.h>

#define endl "\n"
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
    string a[n];
    map<string,int> mp;
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    	mp[a[i]]++;
    	cin.ignore();
	}
	int m; cin >> m;
	string b[m];
	for(int i = 0; i < m; i++)
	{
		cin >> b[i];
		cout << mp[b[i]] << endl;
		cin.ignore();
	}
	
}


