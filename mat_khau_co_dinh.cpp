#include<iostream>
using namespace std;
int main ()
{
   int n=2002,b;
   cin>>b;
   int a[b];
   for(int i=0;i<b;i++)
     cin>>a[i];
    for(int i=0;i<b;i++)
     {
     	if(a[i] != 2002)
     	  cout<<"Sai mat khau"<<endl;
     	else
     	  {
     	  	cout<<"Duoc phep truy cap";
     	  	break;
		   }
	 }
}

