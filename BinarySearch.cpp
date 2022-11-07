#include<iostream>
using namespace std;
int binarysearch(int a[],int s,int l,int x)
{
	if(s<=l){
	int mid=(s+l)/2;
	if(a[mid]==x)
	   return a[mid];
	if(a[mid]>x)
		return binarysearch(a,s,mid-1,x);
	return binarysearch(a,mid+1,l,x);
}
   return 0;
}
int main ()
{
   int n,m;
   cin>>n>>m;
   int a[n],b[m];
   for(int i=0;i<n;i++)
      cin>>a[i];
    for(int i=0;i<m;i++)
      cin>>b[i];
    for(int i=0;i<m;i++)
    {
    	int result=binarysearch(a,0,n-1,b[i]);
    	cout<<result<<" ";
	}
}

