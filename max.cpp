#include<iostream>
using namespace std;
int main ()
{
    int a[101];
    for(int i=1;i<101;i++)
      cin>>a[i];
    int max=a[1];
    int vt=1;
    for(int i=1;i<101;i++)  
    {
    	if(a[i]>max)
    	{
    		max=a[i];
    		vt=i;
		}
	}
	cout<<max<<endl;
	cout<<vt;
}

