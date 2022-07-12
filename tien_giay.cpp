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
    double arr[7]={100.00,50.00,20.00,10.00,5.00,2.00,1.00};
	ll n; cin >> n;
	ll cnt;
	while(n > 0)
	{
		for(int i = 0; i < 7; i++)
		{
			cnt = n / arr[i];
		if(cnt != 0)
		  {
		  	ll t = (cnt * arr[i]);
			n = n % t;
		    cout<< cnt <<" to R$ "<<fixed<<setprecision(2)<<arr[i]<<endl;
		  }
		else cout<<"0 to R$ "<<fixed<<setprecision(2)<<arr[i]<<endl;
	    } 
   }
}



