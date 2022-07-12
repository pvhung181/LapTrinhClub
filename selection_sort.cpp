#include<bits/stdc++.h>
using namespace std;

void selectionSort(pair<int,int> a[],int n)
{
	int kt=n/2;
	while(kt!=0)
	{
	    for(int i=0;i<n-1;i++)
	    {
	    	int min_pos=i;
	        for(int j=i+1;j<n;j++)
	        {
	        	if(a[j].first < a[min_pos].first)
	        	  min_pos=j;
			}
			swap(a[i].first,a[min_pos].first);
			swap(a[i].second,a[min_pos].second);
			kt--;
			if(kt==0) break;
		}
	}
	for(int i=0;i<n;i++)
       cout<<"("<<a[i].first<<","<<a[i].second<<")"<<" ";
    kt=n/2;
    while(kt!=0)
	{
	    for(int i=0;i<n-1;i++)
	    {
	    	int min_pos=i;
	        for(int j=i+1;j<n;j++)
	        {
	        	if(a[j].second > a[min_pos].second)
	        	  min_pos=j;
			}
			swap(a[i].first,a[min_pos].first);
			swap(a[i].second,a[min_pos].second);
			kt--;
			if(kt==0) break;
		}
	}
	   cout<<"\n";
		for(int i=0;i<n;i++)
       cout<<"("<<a[i].first<<","<<a[i].second<<")"<<" ";
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin>>n;
    pair<int,int> a[n];
    for(int i=0;i<n;i++)
       cin>>a[i].first>>a[i].second;
    selectionSort(a,n);
}


