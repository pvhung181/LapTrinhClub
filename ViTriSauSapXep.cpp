#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int n; cin>>n;
    pair<long,long> a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i].first;
    	a[i].second=i+1;
	}
	sort(a,a+n);
	for(int i=0;i<n;i++)
	   cout<<a[i].second<<' ';
}


