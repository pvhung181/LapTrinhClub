#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;

vector<ull> res;

void init(ll n)
{
	ull dem = 0;
	queue<string> q;
	q.push("6");
	q.push("8");
	while(1)
	{
	string top = q.front();
	q.pop();
	res.push_back(stoll(top + "6"));
	if(*res.rbegin() % n == 0)
	{
		cout << *res.rbegin();
		return ;
	}
	res.push_back(stoll(top + "8"));
		if(*res.rbegin() % n == 0)
	{
		cout << *res.rbegin();
		return ;
	}
	q.push(top + "6");
	q.push(top + "8");
	dem++;
	if(dem == 10000)
	{
		cout << 0;
		return;
	}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n ; cin >> n;
	 init(n);
}


