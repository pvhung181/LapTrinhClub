#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

bool ktra() 
{   
ll a,b;     
scanf("%lld%lld",&a,&b);    
ll x=round(pow(a*b,1.0/3));     
return (x*x*x==a*b && a%x==0 && b%x==0); 
} 

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   int n;  
   scanf("%d",&n);     
   while(n--) printf(ktra()?"Yes\n":"No\n");  
}



