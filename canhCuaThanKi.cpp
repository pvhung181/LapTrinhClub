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
     int t; cin >> t;
     while(t--)
     {
     	ll n; cin >> n;
        queue<pair<ll,string>> q;
       q.push({1,"dangdungcntt"});
       q.push({1,"tienquanutc"});
       q.push({1,"quang123"});
       q.push({1,"maianh"});
       q.push({1,"nguyenminhduc2820"});
       while(q.size())
       {
       	int x = q.front().fi;
       	string y = q.front().se;
       	q.pop();
       	if(n - x <= 0) 
       	{
       	    cout << y << endl;
			   break;	
		}
		n -= x;
		q.push({2 * x,y});
	   }
       
	 }
}


