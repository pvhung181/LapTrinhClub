#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll x,y,min=0,max=0; cin>>x>>y;
    if(x>y) swap(x,y);
    if(x==y)
    {
    	cout<<0;
    	return 0;
	}
    for(int i=x-1;;i++)
    {
    	if(i%2!=0)
    	{
    		min=i;
    		break;
		}
	}
	for(int i=y-1;;i--)
    {
    	if(i%2!=0)
    	{
    		max=i;
    		break;
		}
	}
	cout<<((max-min+1)*(min+max))/2;
}


