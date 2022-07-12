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
    map<pair<int,int>,int> m;
    int n,dem=1; cin>>n;
    pair<int,int> p[n];
    for(int i=0;i<n;i++)
    	cin>>p[i].first>>p[i].second;
    for(int i=0;i<n;i++)
    {
    		m[p[i]]++;
    	if(m[p[i]]>1)
    	   {
    	   	cout<<"YES";
    	   	return 0;
		   }	
	}
	cout<<"NO";
}


