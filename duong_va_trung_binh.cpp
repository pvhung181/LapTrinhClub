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
    double a[6];
    int dem=0;
	double sum=0;
    for(int i=0;i<6;i++)
    {
    	cin>>a[i];
    	if(a[i]>0)
    	{
    		dem++;
    		sum+=a[i];
		}
	}
	if(dem)
	{
		cout<<dem<<" Gia tri duong"<<endl;
		cout<<fixed<<setprecision(1)<<sum/dem;
	}else
	{
		cout<<0<<" Gia tri duong"<<endl;
		cout<<fixed<<setprecision(1)<<0.0;
	}
    
    
	
}


