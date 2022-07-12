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
int n;
int cnt = 0;
int permutation[20];

void Try(int k)
{	
    if(k > n)
    {
		cnt++;
	    for(int i = 1; i < k; i++)
	      cout << permutation[i] << ' ';
	    cout << endl;
	    return;
	}
	for(int i = 0; i < 3; i++)
	{
	   permutation[k] = i;
	   if(k >= 2)
	   {
	   	if(permutation[k] == permutation[k - 1] || (permutation[k] + permutation[k - 1]) % 3 == 0) 
		    continue;
	   }
		Try(k + 1);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
     cin >> n;
    permutation[0] = -1; 
    Try(1);
    cout << cnt;
}


