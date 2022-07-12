#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n,k; cin>>n>>k;
    long a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    long long sum=0;
    for(int i=0;i<n;i++)
    {
    	sum=sum+((a[i]/k)*(3*k));
	}
	cout<<sum;
    
}


