#include<iostream>
using namespace std;
int main()
{
   int a,b;
   cin>>a>>b;
   ( a > b) ? cout<<b : cout<<a;
   if(a>b)
     cout<<' '<<(a-b)/2; 
    else
     cout<<' '<<(b-a)/2; 
}


