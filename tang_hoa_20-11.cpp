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
    int n;cin>>n;
    map<string,int> mp;
    for(int i=1;i<=n;i++)
    {
    	int m; cin>>m;
      for(int j=1;j<=m;j++)
      {
      	string str;
      	cin.ignore();
      	cin>>str;
      	mp[str]++;
	  }
	}
	int dem=0,max=0;
	for(auto it:mp)
		if(it.second > max)
		    max = it.second;
    for(auto it:mp)
    	if(it.second == max)
    	   	{
    	   		cout << it.first << endl;
    	   		dem++;
			   }
	if(dem < 2)
	{
		while(max > 0)
		{
		max--;
		for(auto it:mp)
    	  if(it.second == max)
    	{
    		cout << it.first << endl;
    		return 0;
		}
		}
	}
}


