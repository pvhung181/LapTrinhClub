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

int a[10];
int hVi[10];
bool used[10] = {false};
int mid = INT_MAX;
int nha1, nha2, nha3;
     
void Try(int k)
{
	for(int i = 1; i <= 9; i++)
	{
		if(used[i] == false)
		{
			used[i] = true;
			hVi[k] = i;
			if(k == 9) 
	{
		nha1 = a[hVi[1]] + a[hVi[2]] + a[hVi[3]];
		nha2 = a[hVi[4]] + a[hVi[5]] + a[hVi[6]];
		nha3 = a[hVi[7]] + a[hVi[8]] + a[hVi[9]];
		mid = min(mid, max(nha1, max(nha2, nha3)) - min(nha1,min(nha2, nha3)));
	}
			Try(k + 1);
			used[i] = false;
		}
	}
}


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    for(int i = 1; i <= 9; i++) cin >> a[i];
    Try(1);
    cout << mid;
    
}


