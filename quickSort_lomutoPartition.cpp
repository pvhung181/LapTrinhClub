#include<bits/stdc++.h>
using namespace std;

int lomuto_partition(int a[], int l, int r)  // find place's pivot after patition
{
	int pivot = a[r]; // assign pivot = the last element
	int i = l - 1;
	for(int j = l; j < r; j++)
	{
		if(a[j] <= pivot)
		{
			++i;
			swap(a[i],a[j]);
		}
	}
	++i;
	swap(a[i],a[r]);
	return i;
}

void quickSort(int a[],int l, int r)
{
	if(l >= r) return;
	int p = lomuto_partition(a,l,r);
	    quickSort(a,l,p-1);
	    quickSort(a,p+1,r);
}

int main()
{
    int n; cin>>n;
    int a[1000];
    srand(time(NULL));
    for(int i = 0; i < n;i++)
	    a[i] = rand() % 1000;
	quickSort(a,0,n-1);
	for(int i = 0; i < n;i++)
	    cout<<a[i]<<' ';
}


