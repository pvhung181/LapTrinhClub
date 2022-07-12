#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a,b,c,d; cin >> a >> b >> c >> d;
    if(a >= c && a < d || c >= a && c < b)
    {
    	if( a >= c && b <= d) cout << b - a;
    	else if(c >= a && d <= b) cout << d - c;
    	else if (a > c) cout << d-a;
    	else if(a < c ) cout << b - c;
	}
	else{
		cout << 0;
	}
}


