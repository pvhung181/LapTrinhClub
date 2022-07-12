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
const ll N = 1e5 + 5;
inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}
string father, mother;
char permutation[20];
map<string,int> mp;

bool kt(char x)
{
	if(x == 'T' || x == 'H' || x == 'L' || x == 'N') return 1;
	return 0;
}
void Try(int k)
{
	if(k >= father.length())
	{
		string str = "";
		int cnt  = 0;
		for(int i = 0; i < father.length(); i++)
		{
		    if(kt(permutation[i])) cnt++;
			else cnt = 0;
			str += permutation[i];
			if(cnt == 3) return;
			
		}
		mp[str] = 1;
		return;
	}
    permutation[k] = father[k];
    Try(k + 1);
    permutation[k] = mother[k];
    Try(k + 1);
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> father >> mother;
    Try(0);
    for(auto it:mp)
       cout << it.fi << endl;
}
