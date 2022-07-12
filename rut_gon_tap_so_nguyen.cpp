#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
   map<int,int> m;
   long n; cin>>n;
   long long a[n];
   for(int i=0;i<n;i++)
   {
   	cin>>a[i];
   	m[a[i]]++;
   }
   for(int i=0;i<n;i++)
    {
    	if(m[a[i]] >= 1)
    	{
    		cout<<a[i]<<' ';
    		m[a[i]]=0;
		}
	}
     
}


