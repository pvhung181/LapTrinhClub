#include<iostream>
using namespace std;
int main ()
{
  int a,b,c;
  cin >>a>>b;
  if(a+b>24)
  {
  	  c=a+b-24;
  	  cout <<c;
  }else{
  	if(a+b==24)
  	  cout<<0;
  	else
  	  cout<<a+b;
  }
}

