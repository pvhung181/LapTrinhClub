#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int x,dem=0; cin>>x;
	 long long a[10005];
	 int i=1;
	 a[1]=1;
	 while(x>0)
	 {
	 	if(i==1)
	 	   	x=x-1;
	    else
	       	{
	       		a[i]=a[i-1]+i;
	       		x=x-a[i];
	       		if(x<=0)
	       		  break;
			}
	    i++;
	    dem++;
	 }
	 cout<<dem;
}


