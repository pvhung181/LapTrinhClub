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
    map<int,int> m;
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       {
       	cin>>a[i];
       	m[a[i]]++;
	   }
	for(auto it:m)
	   cout<<it.first<<' '<<it.second<<endl;
}


