#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int x,z; cin>>x;
    nhaplai:
    cin>>z; 
    if(z <= x)
       goto nhaplai;
    int dem = 0;
    ll s = 0;
   for(int i = x;; i++)
   {
   	 s = s + i;
   	 dem++;
   	 if(s >= z)
   	    break;
   }
   cout<<dem;
}


