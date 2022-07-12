#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
     long long int a,b,c,kca,kcb;
	 cin>>a>>b>>c;
	 kca=abs(a-b);
	 kcb=abs(c-b);
	 if(kca==kcb)
	   cout<<"The mouse has escaped";
	else if(kca > kcb)
	   cout<<"CAT_B";
	     else
	    cout<<"CAT_A";
}

