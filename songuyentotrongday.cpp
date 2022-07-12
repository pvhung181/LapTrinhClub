#include<iostream>
using namespace std;
int main ()
{
  int n;cin>>n;
  int a[n];
  int dem=0;
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
    {
    	if(a[i]>=2)
		{
			dem=0;
			for(int j=1;j<a[i];j++)
			{
				if(a[i]%j==0)
				  dem++;
			}
	}
		 if(dem==1)
		    cout<<a[i]<< ' '; 
	}
  
}

