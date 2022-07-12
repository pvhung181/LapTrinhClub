#include<bits/stdc++.h>

#define endl "\n"
#define f first
#define s second

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
    map<string,int> ml, mr;
    int n; cin >> n;
    for(int i = 1; i <= n; i++)
    {
	    cin.ignore();
    	string str,tmp = ""; cin >> str;
        for(int j = 1; j < str.size(); j++)
            tmp += str[j];
    	if(str[0] == 'R') mr[tmp]++;
    	else ml[tmp]++;
	}
	int res = 0;
	for(auto x:mr)
	    res += min(x.second,ml[x.first]);
	cout << res;
}


