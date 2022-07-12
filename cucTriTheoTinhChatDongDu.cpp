#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

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
    ll n; cin >> n;
    ll a[n];
    ll mod0[n], mod1[n], mod2[n];
    ll cnt0, cnt1, cnt2; cnt0 = cnt1 = cnt2 = 0;
    for(int i = 0; i < n; i++)
    {
    	cin >> a[i];
    	if(a[i] % 3 == 0) mod0[cnt0++] = a[i];
    	if(a[i] % 3 == 1) mod1[cnt1++] = a[i];
    	if(a[i] % 3 == 2) mod2[cnt2++] = a[i];	
	}
//	for(int i = 0; i < cnt0; i++) cout << mod0[i] << ' ';
//	cout << endl;
//	for(int i = 0; i < cnt1; i++) cout << mod1[i]<< ' ';
//	cout << endl;
//	for(int i = 0; i < cnt2; i++) cout << mod2[i] << ' ';
	if(cnt0 == 0) cout << "Khong co so nao chia 3 du 0" << endl;
	else
	{
		sort(mod0, mod0 + cnt0);
		cout << mod0[0] << ' ' << mod0[cnt0 - 1] << endl;
	}
	if(cnt1 == 0) cout << "Khong co so nao chia 3 du 1" << endl;
	else
	{
			sort(mod1, mod1 + cnt1);
			cout << mod1[0] << ' ' << mod1[cnt1 - 1] << endl;
	}
	if(cnt2 == 0) cout << "Khong co so nao chia 3 du 2" << endl;
	else
	{
		sort(mod2, mod2 + cnt2);
			cout << mod2[0] << ' ' << mod2[cnt2 - 1] << endl;
	}

}


