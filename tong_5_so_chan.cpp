#include<iostream>
using namespace std;
int main()
{
     long int x;
     long int sum[100006]={},dem=1;
     for(int i=0;i<i+1;i++)
     {
     	cin>>x;
     	if(x==0)
     		   break;
	 	if(x%2==0) 	
	 	{
	 		for(int i=1;i<=5;i++)
	 		   {
	 		   	sum[dem]=sum[dem]+x;
	 		   	x+=2;
				}
				dem++;
		 }else
		 {
		 	x++;
		 	for(int i=1;i<=5;i++)
		 	{
		 		sum[dem]=sum[dem]+x;
		 		x+=2;
			 }
			 dem++;
		 }
	 }
	 
	 for(int i=1;i<dem;i++)
	    cout<<sum[i]<<endl;
}


