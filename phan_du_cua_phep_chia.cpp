#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll x,y; cin>>x>>y;
    if(x>y)
	   swap(x,y);
	for(int i=x+1;i<y;i++)
	   if(i%5==2 || i%5==3)
	      cout<<i<<endl;
}


