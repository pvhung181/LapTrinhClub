#include<iostream>
using namespace std;
int main ()
{
     int n,sl=0,sc=0,dl=0,dc=0;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++)
       cin>>a[i];
    for(int i=0;i<n;i++)
    {
    	if(a[i]%2==0)
    		{
    			sc=sc+a[i];
    			dc++;
			}
    	else
			{
				sl=sl+a[i];
				dl++;
			}
		}
	if(dl==0)
	    cout<<'0'<<endl;
	else
	   cout<<sl/dl<<endl;
	if(dc==0)
	    cout<<'0';
	else
	   cout<<sc/dc;
}

