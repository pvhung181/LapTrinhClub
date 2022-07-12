#include<bits/stdc++.h>

#define endl "\n"
using namespace std;
//10
//3 7 1 4 3 7 3 5 3 9
typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    priority_queue<int, vector<int>, greater<int>> pq;
    ll n, k,res = 0; cin >> n >>k;
    int a[n];
    for(int &t:a)
    {
    	cin >> t;
    	pq.push(t);
	}
	ll money = 0;
	while(pq.size() >  1)
	{
		int b[n];
		for(int i = 1; i <= k; i++)
		{
			b[i] = pq.top();
			pq.pop();
		}
		res = 0;
		for(int i = 1; i <= k; i++)
			res = res + b[i];
		money = money + res;
		pq.push(res);
		if(pq.size() < k && pq.size() != 1)
		{
			while(!pq.empty())
			{
				money = money + pq.top();
				pq.pop();
			}
		}
	}
	cout << money;
}


