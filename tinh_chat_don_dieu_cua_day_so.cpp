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
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    int dt=0,dg=0,db=0,dtb=0,dgb=0;
    for(int i=0;i<n-1;i++)
      {
      	 if(a[i]==a[i+1])
      	   db++;
      	if(a[i]<a[i+1])
      	   dt++;
      	if(a[i]>a[i+1])
      	   dg++;
      	if(a[i]<=a[i+1])
      	   dtb++;
      	if(a[i]>=a[i+1])
      	   dgb++;
	  }
	if(db==n-1)
	{
		cout<<"Day bang nhau";
		return 0;
	}
	 if(dtb==n-1&&dtb!=dt)
	{
		cout<<"Day don dieu tang";
		return 0;
	}
	 if(dgb==n-1&&dgb!=dg)
	{
		cout<<"Day don dieu giam";
		return 0;
	}
	 if(dt==n-1)
	{
		cout<<"Day don dieu tang ngat";
		return 0;
	}
	 if(dg==n-1)
	{
		cout<<"Day don dieu giam ngat";
		return 0;
	}
		cout<<"Day khong don dieu";
}


