#include<bits/stdc++.h>
using namespace std;
int main ()
{
     int n,j=-3;
     int dem=0;
     cin>>n;
     for(int i=1;i<=n;i++)
     {
     	dem=0;
     	for(int k=j+=4;k < j+3;k++)
     	{
     		cout<<k<<" ";
     		dem++;
     		if(dem==3)
     		 cout<<"Nam"<<endl;
		 }
	 }
}

