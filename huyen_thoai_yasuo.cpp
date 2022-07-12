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
    int a[n];
    for(int &x:a) cin >> x;
    int dem = 0, s =0 ;
    
    for(int i = 0; i < n - 1; i++)
    {
    	if(a[i] == 1)
    	  dem++;
    	if(a[i]  ==  0)
    	 dem = 0;
    	if(dem == 2 && i + 1 < n)
    	{
    		s++;
    		dem = 0;
    		i++;
		}
	}
	cout << s;
}


