#include<bits/stdc++.h>

#define endl "\n"
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
    int p, j1, j2, r, a;
    cin >> p >> j1 >> j2 >> r >> a;
    if(r == 0 && a == 1) cout << "Cau thu 1 chien thang!" ;
    else if(r == 1 && a == 0) cout << "Cau thu 1 chien thang!" ;
    else if(r == 1 && a == 1) cout << "Cau thu 2 chien thang!" ;
    else
    {
    	int sum = j1 + j2;
    	if(p == 0 && sum % 2 != 0) cout << "Cau thu 1 chien thang!";
    	else if(p == 0 && sum % 2 == 0) cout << "Cau thu 2 chien thang!";
    	else if (p == 1 && sum % 2 != 0) cout << "Cau thu 2 chien thang!";
    	else if(p == 1 && sum % 2 == 0) cout << "Cau thu 1 chien thang!";
	}
}


