#include<iostream>
using namespace std;
int main()
{
      long long a;
      cin>>a;
      if(a<1)
         cout<<"Poor Number";
    else
    {
    	long long sum=0;
    	for(int i=1;i<=a/2;i++)
    		if(a%i==0)
    		   sum+=i;
    	if(sum > a)
    	   cout<<"Rich Number";
    	else
    	   cout<<"Poor Number";
	}
}


