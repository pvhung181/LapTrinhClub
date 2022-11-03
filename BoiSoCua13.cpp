#include<iostream>
using namespace std;
int main ()
{
   long int a,b,s=0,x,y;
   cin>>a>>b;
   if(a>b)
     {
     	x=b;y=a;
	 }
	 if(a<b)
     {
     	x=a;y=b;
	 }
	 while(x<=y)
	 {
	 	if(x%13!=0)
	 	  s=s+x;
	 	x++;
	 }
	 cout<<s;
	
}

