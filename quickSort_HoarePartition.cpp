#include<bits/stdc++.h>
using namespace std;

int hoare_partition(int a[], int l, int r)
{
	int pivot = a[l];
	int i = l - 1;
	int j = r + 1;
    while(true)
    {
    	do{
    		i++;
		}
    	while(a[i] < pivot);
        
        do {
        	j--;
		}
        while(a[j] > pivot);
        
        if(i >= j)  return j;
        
        swap(a[i],a[j]);
	}
}

void quickSort(int a[],int l, int r)
{
	if(l >= r) return;
	int p = hoare_partition(a,l,r);
	    quickSort(a,l,p);
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


