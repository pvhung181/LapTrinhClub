#include<iostream>
using namespace std;
int main()
{
     long long a,n,sum=0;
     cin>>a;
     nhapLai:
     cin>>n;
     if(n<=0)
       goto nhapLai;
    for(int i=1;i<=n;i++)
       	sum = sum + a++;
    cout<<sum;
}


