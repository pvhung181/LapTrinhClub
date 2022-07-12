#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
     int x,y;
     cin>>x>>y;
     if(x==1) cout<<fixed<<setprecision(2)<<"Tong: R$ "<<y*4.0;
     if(x==2) cout<<fixed<<setprecision(2)<<"Tong: R$ "<<y*4.50;
     if(x==3) cout<<fixed<<setprecision(2)<<"Tong: R$ "<<y*5.0;
     if(x==4) cout<<fixed<<setprecision(2)<<"Tong: R$ "<<y*2.0;
     if(x==5) cout<<fixed<<setprecision(2)<<"Tong: R$ "<<y*1.50;
}


