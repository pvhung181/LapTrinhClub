#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef  long long ll;

int main()
{
	_fastio;
    ll a,b; 
    while(cin >> a >> b && a!=0 && b!=0) {
    	ll res1,res2,res3;
    	res1 = (a+b)/2;
    	res2 = 2*b-a;
    	res3 = 2*a-b;
    	cout << min(min(res1,res2), res3) << endl;
	}

}

