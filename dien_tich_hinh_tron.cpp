#include<iostream>
#include<iomanip>
using namespace std;
#define pi 3.14159
int main ()
{
   double r,A;
   cin>>r;
   A=r*r*pi;
   cout<<fixed<<setprecision(4)<<"A="<<A;
}

