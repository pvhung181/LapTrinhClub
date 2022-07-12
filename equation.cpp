#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
  float a,b;
  cin>>a>>b;
  if(a==0 && b==0) 
       cout<<"Vo So Nghiem";
  if(a==0 && b!=0) 
       cout<<"Vo Nghiem";
  if(a!=0 && b!=0) 
       cout<<fixed<<setprecision(3)<<-b/a;
}
