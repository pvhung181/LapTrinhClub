#include<iostream>
using namespace std;
int main()
{
   int n ; cin>>n;
   int dem=0;
   for(int i=n;i>0;i--)
   {
   	for(int j=1;j<=i;j++)
   	   {
   	   	cout<<"*";
   	   	if(j==i)
   	   	  cout<<endl;
		  }
        if(i==1) break;
		  dem+=2;
	for(int i=1;i<=dem;i++)
	   cout<<' ';
	} 
    
     for(int i=2;i<=n;i++)
   {
   	dem-=2;
	for(int i=1;i<=dem;i++)
	   cout<<' ';
   	for(int j=1;j<=i;j++)
   	   {
   	   	cout<<"*";
   	   	if(j==i)
   	   	  cout<<endl;
		  }
	} 
}


