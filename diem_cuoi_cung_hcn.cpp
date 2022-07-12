#include<iostream>
using namespace std;
int main()
{
     long double x[5],y[5];
     for(int i=1;i<=3;i++)
        cin>>x[i]>>y[i];
     if(x[1]==x[2]) x[4]=x[3];
     else if(x[1] == x[3]) x[4]=x[2];
     else x[4]=x[1];
     if(y[1]==y[2]) y[4]=y[3];
     else if(y[1] == y[3]) y[4]=y[2];
     else y[4]=y[1];
     cout<<x[4]<<' '<<y[4];
     
}


