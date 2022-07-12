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
    priority_queue<int, vector<int>, greater<int>> pq;
    ll n, res ; cin >> n;
    int a,b;
    int arr[n];
    for(int &t:arr)
    {
    	cin >> t;
    	pq.push(t);
	}
	ll Money = 0;
	while(pq.size() > 1)
	{
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		res = a + b;
		Money = Money + res;
		pq.push(res);
	}
	cout << Money;
}


