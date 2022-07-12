#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
      long n; cin>>n;
      int a[100007];
      for(int i=0;i<=n;i++)
         cin>>a[i];
    long double x; cin>>x;
    long double sum=0;
    for(int i=1;i<=n;i++)
    	sum = sum + (a[i]*i*pow(x,i-1));
	cout<<fixed<<setprecision(3)<<sum;
}
