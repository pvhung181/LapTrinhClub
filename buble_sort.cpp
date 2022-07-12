#include<bits/stdc++.h>
using namespace std;

void bubleSort(int a[],int b[],int n)
{
	int k=n/2;
	int dem=0;
	for(int i=0;i<k;i++)
	{
		if(a)
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			    swap(a[j],a[j+1]);
		}
	}
	for(int i=0;i<n;i++)
	   cout<<a[i]<<' ';
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	b[i]=a[i];
	}
	sort(b,b+n);
    bubleSort(a,b,n);	
    
}


