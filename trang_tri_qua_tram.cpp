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
    int n,dem=0; cin >> n;
    int l = n - 1 , r = n + 1;
    for(int hang = 1 ; hang < 2*n;hang++)
    {
    	if(hang == 1 || hang == 2*n - 1)
    	{
    		for(int cot = 1 ; cot < 2*n; cot ++)
    		{
    			if(cot == n) cout <<"*";
    			else cout << ' ';
			}
		cout << endl;
		}
		if(hang > 1 && hang <= n)
		{
			for(int cot = 1 ; cot < 2*n; cot ++)
			{
				if(cot == l || cot == r) cout << "*";
				else cout << ' '; 
			}
			l--;r++;
			cout << endl;
		}
		if(hang > n && hang < 2*n -1)
	    {
		    if(dem == 0)
		    {
		    	l+=2;r-=2;
		    	dem++;
			}
			for(int cot = 1 ; cot < 2*n; cot ++)
			{
				if(cot == l || cot == r) cout << "*";
				else cout << ' '; 
			}
			l++;r--;
			cout << endl;
		}
	}
}


