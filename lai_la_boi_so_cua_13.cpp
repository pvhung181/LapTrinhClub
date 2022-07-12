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
    ull x,y,min=0,max=0; cin>>x>>y;
    if(x>y) swap(x,y);
    if(x==y)
    {
    	if(x%13==0)
    	   {
    	   	cout<<0;
    	   	return 0;
		   }
		else 
		{
			cout<<x;
			return 0;
		}
	}
    for(int i=x;;i++)
    	if(i%13==0)
    	  {
    	  	min=i;
    	  	break;
		  }
	for(int i=y;;i--)
    	if(i%13==0)
    	  {
    	  	max=i;
    	  	break;
		  }
	ull n; n=(max-min)/13 + 1;	 
	ull k; k=((n*(min+max))/2);
	cout<<(((y-x+1)*((x+y)))/2)-k;
}


