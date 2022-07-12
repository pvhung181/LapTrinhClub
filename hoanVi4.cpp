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

int n;
int cnt = 0;
bool check[N] = {};
int kq[N] = {};
void inKq()
{
	for(int i = 1; i <= n; i++)
	    cout << kq[i] << ' ';
	cout << endl;
	cnt++;
	return;
}

void Try(int k)
{
	if(k > n) inKq();
	for(int i = 1; i <= n; i++)
	{
		
		if((k == 1 || (i + kq[k - 1]) % 4 != 0) && check[i] == false )
		{
		    kq[k] = i;
			check[i] = true;
			Try(k + 1);
			check[i] = false;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    Try(1);
    cout << cnt;
}


