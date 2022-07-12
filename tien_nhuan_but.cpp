#include<iostream>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if(n<0)
       cout<<"ERROR";
    else
    {
    	float tien=1;
    	int y= n/50;
    	tien = n *50;
    	if(n >= 50)
    	   cout<<(tien/100.0)+(y*5);
    	else
    	   cout<<tien/100;
	}
}

