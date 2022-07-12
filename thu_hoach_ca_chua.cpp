#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n,k; cin>>n>>k;
    ll a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    ll sum=0;
    sort(a,a+n,greater<ll>());
    for(int i=0;i<n;i++)
       cout<<a[i]<<' ';
//    for(int i=0;i<n;i++)
//    {
//          sum=sum+a[i];
//         for(int j=i+1;j<n;j++)
//         {
//         	a[j]=a[j]-k;
//         	if(a[j]<=0)
//         	   a[j]=0;
//		 }
//	}
//	cout<<sum;
}


