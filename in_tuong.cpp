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
    int n; cin >> n;
    int day = 0, sDay = 1;
  while(1)
  {
  	if(sDay >= n)
  	{
  		cout << day + 1;
		break;	
	}
  	sDay = sDay + pow(2,day);
  	day++;
  }
}


