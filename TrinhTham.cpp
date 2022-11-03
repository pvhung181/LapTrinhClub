#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n,k; cin >> n >> k;
	int a[n];
	for(int &x:a) cin >> x;
	deque<int> dq;
	for(ll i = 0; i < k; i++)
	{
		while(!dq.empty() && a[i] > a[dq.back()])
		    dq.pop_back();
		dq.push_back(i);
	}
	cout << a[dq.front()] <<' ';
	for(ll i = k; i <= n - 1; i++)
	{
		if(dq.front() <= i - k)
		   dq.pop_front();
		while(!dq.empty() && a[i] > a[dq.back()])
		   dq.pop_back();
		dq.push_back(i);
		cout << a[dq.front()] <<' ';
	}
}


