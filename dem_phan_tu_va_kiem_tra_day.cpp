#include<iostream>
using namespace std;
int main()
{
     int n; cin>>n;
     long long c,d; cin>>c>>d;
     long long a[n+1];
     for(int i=1;i<=n;i++)
       cin>>a[i];
    int dem=0;
    for(int i=1;i<=n;i++)
    	if(a[i]>=-c && a[i]<=d)
    	    dem++;
    cout<<dem<<endl;
    dem=0;
    for(int i=1;i<=n;i++)
       if(a[i]>=a[i+1])
          dem++;
    (dem)?cout<<"NO":cout<<"YES";
}


