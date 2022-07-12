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

bool used[10];
int kq[10],n;

void in()
{
	for(int i = 1; i <= n; i++)
	   cout << kq[i];
	cout << endl;
}
//&& (kq[i - 1] + kq[i]) % 4 != 0 && ( kq[i + 1] + kq[i]) % 4 != 0
void lietKe(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!used[j])
		{
			used[j] = true;
			kq[i] = j;
			if(i == n)
			   in();
			else
			   lietKe(i + 1);
			used[j] = false;
		}
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n;
    lietKe(1);
}


