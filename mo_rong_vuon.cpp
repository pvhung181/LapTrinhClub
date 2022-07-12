#include<iostream>
#include<math.h>
using namespace std;
int main()
{
      long long s,n,T;
	  cin>>s>>n>>T;
	   long double x;
	   x=(T-pow(n,2))/n;
	   long double del=pow(x,2)-4*s;
	   long double x1,x2;
	   x1=(x-sqrt(del))/2;
	   x2=s/x1;
	   if(x1>x2) cout<<x1<<' '<<x2;
	   else cout<<x2<<' '<<x1;
	   
}


