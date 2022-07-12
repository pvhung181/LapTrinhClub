#include<bits/stdc++.h>
using namespace std;
int main()
{
	 ios_base::sync_with_stdio(false);
     cin.tie(NULL); 
     map<int,int> m;
      long n; cin>>n;
       long long a[n];
      for(int i=1;i<=n;i++)
     {
       cin>>a[i];
       m[a[i]]++;
}  
     long long MAX=m[a[1]];
     long long vt;
     for(int i=1;i<=n;i++)
    {
    	if(MAX < m[a[i]])
    	   MAX=m[a[i]];
    	   vt=a[i];
	}
	if(MAX>n/2)
	   cout<<vt;
	else
	   cout<<"khong co phan tu ap dao";
}


