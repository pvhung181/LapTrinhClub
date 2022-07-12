#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     long double m[12][12];
     long double sum=0,avg=0;
     int dem=0;
	 char c;
	 cin>>c;
	 for(int i=0;i<=11;i++)
	    for(int j=0;j<=11;j++)
	        cin>>m[i][j];
	 for(int i=11;i>=7;i--)
	 {
	    for(int j=i-1;j>dem;j--)
	    	sum = sum +m[i][j];
	    dem++;
}
     avg=sum/30.0;
     if(c=='S')
       cout<<fixed<<setprecision(1)<<sum;
    else
       cout<<fixed<<setprecision(1)<<avg;
}


