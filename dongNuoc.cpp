#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

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
    int n, m, k; cin >> n >> m >> k;
    queue<pair<int,int>> q;
    map<pair<int,int>, int> mp;
    mp[{0,0}] = 0;
    q.push({0,0});
    int binh[3];
    while(q.size())
    {
    	int binh1 = q.front().fi;
    	int binh2 = q.front().se;
    	int b1[2] = {-binh1, n - binh1};
    	int b2[2] = {-binh2, m - binh2};
    	q.pop();
    	if(binh1 == k || binh2 == k)
    	{
    		cout << mp[{binh1,binh2}];
    		return 0;
		}
    	for(int i = 0; i < 2; i++)
    	{
    		int tmp = binh1 + b1[i];
    		if(tmp <= n && mp.find({tmp,binh2}) == mp.end())
    		{
    			q.push({tmp,binh2});
    			mp[{tmp,binh2}] =  mp[{binh1,binh2}] + 1;
			}
			tmp = binh2 + b2[i];
    		if(tmp <= m && mp.find({binh1,tmp}) == mp.end())
    		{
    			q.push({binh1,tmp});
    			mp[{binh1,tmp}] =  mp[{binh1,binh2}] + 1;
			}
		}
		// binh 1 do vao binh 2
		if(binh1 + binh2 <= m)
		{
			if(mp.find({0,binh1 + binh2}) == mp.end())
			{
				q.push({0,binh1 + binh2});
				mp[{0,binh1 + binh2}] = mp[{binh1,binh2}] + 1;
			}
			
		}
		else
		{
			if(mp.find({binh1 + binh2 - m, m}) == mp.end())
			{
				q.push({binh1 + binh2 - m, m});
				mp[{binh1 + binh2 - m, m}] = mp[{binh1, binh2}] + 1;
			}
		}
		// binh 2 do vao binh 1
			if(binh1 + binh2 <= n)
		{
			if(mp.find({binh1 + binh2, 0}) == mp.end())
			{
				q.push({binh1 + binh2, 0});
				mp[{binh1 + binh2, 0}] = mp[{binh1,binh2}] + 1;
			}
			
		}
		else
		{
			if(mp.find({n, binh1 + binh2 - n}) == mp.end())
			{
				q.push({n, binh1 + binh2 - n});
				mp[{n, binh1 + binh2 - n}] = mp[{binh1, binh2}] + 1;
			}
		}
		
	}
	cout << "Khong dong duoc nuoc";
}


