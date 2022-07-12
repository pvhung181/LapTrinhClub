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


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    map<char,int> m;
     string a, b;
     cin >> a; cin.ignore(); cin >> b;
     for(char x:a) m[x]++;
     int cnt = 0;
     for(char x:b)
     {
     	if(x == '*')
     	{
     		cnt++;
     		continue;
		 }
		m[x]--;
	 }
	 int res = 0;
    for(auto x:m)
    {
    	if(x.second < 0)
    	{
    		cout << "no";
    		return 0;
		}
		res += x.second;
	}
	if(res == cnt) cout << "yes";
	else cout << "no";
}
