#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

bool isPerfect(ull n)
{
    ull sum = 1;
    for (ull i=2; i*i<=n; i++)
    {
        if (n%i==0)
        {
            if(i*i!=n)
                sum = sum + i + n/i;
            else
                sum=sum+i;
        }
    }
     if (sum == n && n != 1)
          return true;
  
     return false;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
	while(t--)
	{
		ull s = 0;
	   ull x; cin >> x;
	   if(isPerfect(x)) cout << x << " eh perfeito" << endl;
	   else cout << x << " nao eh perfeito" << endl;
}
}
