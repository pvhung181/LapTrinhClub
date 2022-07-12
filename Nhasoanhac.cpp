#include<iostream>
using namespace std;
int main ()
{
   int a[9];
   int tang=0,giam=0;
   for (int i=1;i<9;i++)
      cin >> a[i];
    for(int i=1;i<8;i++)
    {
    	if(a[i+1]==a[i])
    	    {
    	    	cout<<"KHONGBIET";
    	    	break;
			}
    	if(a[i+1]>a[i])
    	  tang++;
    	if(a[i+1]<a[i])
    	  giam++;
	}
	if(tang==7)
	   cout << "TANG" << endl;
	if(giam==7)
	   cout << "GIAM" << endl;
	}


