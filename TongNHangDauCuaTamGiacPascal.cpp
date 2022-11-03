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
    int t; cin >> t;
    ull s = 0;
    while(t--)
    {
    	int n; cin >> n;
    	s = 0;
    	for(int i = 0; i < n; i++)
    	 s += pow(2,i);
    	cout << s << endl;
	}
}


