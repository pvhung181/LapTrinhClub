#include<iostream>
#include<string>
using namespace std;
int main()
{
    long long x,y;
    long long dem=0;
    string str[100006];
    for(int i=0;1>0;i++)
    {
    	cin>>x>>y;
    	if(x==y)
    	  break;
    	if(x>y)
    	{
    		str[dem]={"Decrescente"};
    		dem++;
		}
		if(x<y)
		{
			str[dem]={"Crescente"};
			dem++;
		}
	}
	for(int i=0;i<dem;i++)
	  cout<<str[i]<<endl;
}


