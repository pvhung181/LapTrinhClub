#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int  m[12][12];
    char c; cin>>c;
    for(int i=0;i<12;i++)
       for(int j=0;j<12;j++)
          cin>>m[i][j];
    ld s = 0 ;
    	for(int i = 0; i <= 4;i++)
    	    	for(int j= i + 1; j <= 10 - i; j++)
                	s = s + m[j][i];
	if(c=='S')
	    cout<<fixed<<setprecision(1)<<s;
	else
	   cout<<fixed<<setprecision(1)<<s/30.0;
}


