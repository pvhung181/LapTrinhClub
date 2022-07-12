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
    int n,m; scanf("%d%d",&n,&m);
    ll cd=0,cr=0;
    for(int i=1;i<=n;i++)
       cd=(cd+i);
    for(int i=1;i<=m;i++)
       cr=(cr+i);
    ll s=((cr%M)*(cd%M))%M;
   cout<<s;
}


