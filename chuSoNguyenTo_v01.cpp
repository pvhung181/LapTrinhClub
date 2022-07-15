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

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int cases [] = {2,3,5,7};
    vector<ll> number;
    queue<ll> q;
    q.push(2);
    q.push(3);
    q.push(5);
    q.push(7);
    while(1){
	    number.push_back(q.front());
    	if(number.size() > 21844) break;
    	for(int i = 0; i < 4; i++)
    	{
    		ll temp = q.front() * 10 + cases[i];
    		q.push(temp);	
		}
		q.pop();
	}
	ll t; cin >> t;
	for(ll i = 1; i <= t; i++){
		ll n; cin >> n;
		cout << '#' << i << ' ' << number[n - 1] << endl;
	}
}
