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
    int n; cin >>n;
    ld a[n+1],s,s2; 
    ll dem1 = 0,dem2 = 0;
    for(int i =1; i <= n; i++)
    	 cin >> a[i];
    if(a[1] < 0)
    {
    	dem1++;
    	goto b2;
	}
     s = sqrt(a[1]);
    for(int i = 2; i <= n; i++)
    	{
    		if(a[i] + s < 0)
    		{
    			dem1++;
    			break;
			}
    		s = sqrt(s + a[i]);
			}
	b2:
	if(a[n] < 0)
	{
		dem2++;
        goto b3;                       
		}	
     s2 = sqrt(a[n]);
    for(int i = n - 1; i >= 1; i--)
    	{
    			if(s2 + a[i] < 0)
    		{
    			dem2++;
    			break;
			}
    		s2 = sqrt(s2 + a[i]);
			}	
	b3:
    if(dem1 != 0) 	cout << "Khong tinh duoc S1" << endl;
	else  cout << fixed << setprecision(3) << s << endl;
	
    if(dem2 != 0) 	cout << "Khong tinh duoc S2" << endl;
	else  cout << fixed << setprecision(3) << s2 <<endl;
}
