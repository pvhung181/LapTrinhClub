#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	char c;
	cin>>c;
	long int m[12][12];
	float sum=0;
	long double avg=0;
	for(int i=0;i<12;i++)
	   for(int j=0;j<12;j++)
	     cin>>m[i][j];
		for(int i=0;i<11;i++)
		   for(int j=0;j<11-i;j++)
		      sum=float(sum+m[i][j]);
	if(c=='S')
	  cout<<fixed<<setprecision(1)<<sum;
	else
	  cout<<fixed<<setprecision(1)<<sum/66;
}


