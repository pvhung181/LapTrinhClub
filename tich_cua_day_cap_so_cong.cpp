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
    ull n,k,min; cin >> n >> k;
    ull s = 1;
    ull x = n % k;
    for(int  i = 1;; i++)
    {
    	ull temp = i % k;
    	if(temp == x)
    	{
    		min = i;
    		break;
		}
	}
	ull sl;
	if(x != 0)
{
    sl = ((n - min) / x) + 1;
	s = (sl * (n + min)) / 2;
    cout << s;
}
    else
	{
	sl = ((n - min) / k) + 1;
	s = (sl * (n + min)) / 2;
    cout << s;
		  } 	 
}


