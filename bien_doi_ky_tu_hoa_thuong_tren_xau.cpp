#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
     char c[1006];
     gets(c);
     cout<<c<<endl;
     int len = strlen(c);
     for(int i=0;i<len;i++)
     {
     	if(c[i]>=65 && c[i]<=90)
     	   {
     	   	c[i]=c[i]+32;
     	   	continue; 
     	   }
     	if(c[i]>=97 && c[i]<=122)
     	   c[i]=c[i]-32;
	 }
	 cout<<c<<endl;
	 for(int i=0;i<len;i++)
	   	if(c[i]>=97 && c[i]<=122)
     	   c[i]=c[i]-32;
     	cout<<c<<endl;
	 for(int i=0;i<len;i++)
	     	c[i]=c[i]+32;
	    cout<<c<<endl;
	 for(int i=0;i<len;i++)
	 	{
	 		if(c[i]=='a' || c[i]=='e' || c[i]=='i' || c[i]=='o' || c[i]=='u' )
	 	         {
	 	         	if(c[i]>=65 && c[i]<=90)
	 	            	c[i]=c[i]+32;
	 	            	continue;
	 	         }
	 	    else
	 	        if(c[i]>=97 && c[i]<=122)
     	                 c[i]=c[i]-32;
		 }
    cout<<c<<endl;
   for(int i=0;i<len;i++)
	   	if(c[i]>=97 && c[i]<=122)
     	   c[i]=c[i]-32;
    for(int i=1;i<len;i+=2)
        c[i]=c[i]+32;
    cout<<c;
	 
}


