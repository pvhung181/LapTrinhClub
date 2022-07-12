#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long int a[100006];
    float max;
    for(int i=1;i<=n;i++)
       cin>>a[i];
    float c[100006];
    for(int i=1;i<=n;i++)
       c[i] = a[i]/(n-(i-1.0));
    max=c[1];
   for(int i=1;i<=n;i++)
      if(max < c[i])
         max=c[i];
    cout<<fixed<<setprecision(2)<<max<<endl;
    long int sum=0;
    if(n==1)
      cout<<a[1];
    else{
    for(int i=1;i<n;i++)
        sum=sum+(a[i]+a[i+1]);
    cout<<sum;
}
}


