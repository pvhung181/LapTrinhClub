#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int f[47];
    f[1]=0;
    f[2]=1;
    if(n<=2)
        for(int i=1;i<=n;i++)
            cout<<f[i]<<' ';
    else{
	for(int i=1;i<=2;i++)
            cout<<f[i]<<' ';
        for(int i=3;i<=n;i++)
           {
         	f[i]=f[i-1]+f[i-2];
         	cout<<f[i]<<' ';
	       }
}
}


