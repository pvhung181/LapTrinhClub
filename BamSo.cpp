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
    string a; cin >> a;
    deque<char> d;
    d.push_front(a[0]);
    for(int i = 1; i < a.length();i++)
    {
    	d.push_back(a[i]);
    	while(d.size() != 1)
    	{
    	int res = (d.front() - '0') + (d.back() - '0');
    	string resstr = to_string(res);
    	d.pop_back();
    	d.pop_front();
    	for(char x:resstr)
    	    d.push_back(x);
		}	
	}
	cout << d.front();
}


