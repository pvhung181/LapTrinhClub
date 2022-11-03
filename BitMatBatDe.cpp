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
    int n, k; cin >> n >> k;
	deque<int> q; 
	for(int i = 1; i <= n; i++)
		q.push_back(i);
    while(q.size() != 1)
    {
    	for(int i = 1; i < k; i++)
    	{
    		q.push_back(q.front());
    		q.pop_front();
		}
		q.pop_front();
	}
	cout << q.front();
}


