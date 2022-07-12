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
    ll n,min1=0,min2=0,min3=0,max1=0,max2=0,max3=0,dem1=0,dem2=0,dem3=0;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(a[i]%3==0)
		{
			if(min1>a[i])
			  min1=a[i];
			if(max1<a[i])
			   max1=a[i];
			dem1++;
		}
		if(a[i]%3==1||a[i]%3==-1)
		{
			if(min2>a[i])
			  min2=a[i];
			if(max2<a[i])
			   max2=a[i];
			dem2++;
		}
		if(a[i]%3==2||a[i]%3==-2)
		{
			if(min3>a[i])
			  min3=a[i];
			if(max3<a[i])
			   max3=a[i];
			dem3++;
		}
	}
	if(dem1!=0)	cout<<min1<<' '<<max1<<endl;
	    else cout<<"Khong co so nao chia 3 du 0";
	if(dem2!=0) cout<<min2<<' '<<max2<<endl;
	    else cout<<"Khong co so nao chia 3 du 1";
	if(dem3!=0) cout<<min3<<' '<<max3<<endl;
        else cout<<"Khong co so nao chia 3 du 2";
}


