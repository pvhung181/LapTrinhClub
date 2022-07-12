#include<bits/stdc++.h>

#define endl "\n"
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)
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
   int t; cin >> t;
   while(t--)
   {
   	 string str; cin >> str;
    for(int i = str.length() - 1; i >= 0; i--)
    {
    	if(str[i] == '1')
    	{
    		cout << str.length() - 1 << endl;
    		goto next;
		}
    	str.pop_back();
	}
	cout << -1 << endl;
	next: continue;
   }
}
