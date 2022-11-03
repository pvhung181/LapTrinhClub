#include<iostream>
using namespace std;
int main ()
{
   long long int n,y,m,d;cin>>n;
   y=n/365;n=n%365;m=n/30;d=n%30;
   cout<<y<<" nam"<<endl;cout<<m<<" thang"<<endl;cout<<d<<" ngay";
}

