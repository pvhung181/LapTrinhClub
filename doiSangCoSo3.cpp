#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+9;
const ll N = 1e5 + 5;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    	queue<int> q;
    	ll n ; cin >> n;
    	ll ans = 0;
    	for(int i = 18; i >= 0; i--)
    	{
    		ll temp = pow(3,i);
    		if(temp <= n){
    		    if(2 * temp + ans <= n){
    			q.push(2);
    			ans += 2 * temp;
    			continue;
			    }
		    	if(temp + ans <= n){
				q.push(1);
				ans += temp;
				continue;
			    }
			    q.push(0);
			}
			
		}
    	while(q.size()) {
    		cout << q.front();
    		q.pop();
		}
		cout << endl;
	}
}
