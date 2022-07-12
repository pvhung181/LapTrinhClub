#include<iostream>
using namespace std;
int main()
{
        long long int a,b;
        long long int ucln[100005],bcnn[100005];
        long long int dem=0;
      for(int i=0;0<1;i++)
      {
      	cin>>a>>b;
      	if(a==0 & b==0)
      	   break;
      	long long int r=a%b;
        long long int w=a*b;
      	while(r!=0)
      	{
      		a=b;
      		b=r;
      		r=a%b;
		  }
		ucln[dem]=b;
		bcnn[dem]=w/b;
		dem++;
	  }
     for(int i=0;i<dem;i++)
	  cout<<ucln[i]<<' '<<bcnn[i]<<endl;
}


