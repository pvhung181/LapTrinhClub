#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

int C(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;  cin>>n;
	int a[n];
    ll dc=0,dl=0;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0) dc++;
		else dl++;
	 } 
	if(n<3)
	   cout<<0;
	else{
		if(dc>2 && dl>1) cout<<C(3,dc)+(C(2,dl)*C(1,dc));
		else if(dc<1 && dl<2) 
	}
}


