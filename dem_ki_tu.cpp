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



int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string str; cin >> str;
    int t; cin >> t;
    int dem = 0;
    while(t--)
    {
    	dem = 0;
    	int a, b; cin >> a  >> b;
    	char c ; cin.ignore(); cin >> c;

    	for(int i = a - 1; i <= b - 1; i++)
    	       if(str[i] == c)
    	          dem++;
    	cout << dem <<' ';
	}
}


