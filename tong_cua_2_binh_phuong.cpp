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

void solve(int n)
{
	 int res = sqrt(n);
    for(int i = res; i > 0; i--)
    {
    	float resf = sqrt(n - pow(i,2));
    	int resi = sqrt(n - pow(i,2));
    	if(resf == resi)
    	{
    		cout << "Co" << endl;
    		return ;
		}
	}
	cout << "Khong" << endl;
	return ;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n[3];
    for(int i = 0; i < 3; i++)
    {
    	cin >> n[i];
    	solve(n[i]);
	}
    
}


