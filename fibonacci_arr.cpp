#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

ull fibo(int n)
{
	if(n==0)
	   return 0;
	if(n==1||n==2)
	    return 1;
	return fibo(n-1)+fibo(n-2);
}

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; cin>>t;
     int n[t+1];
    ull sto[t+1],dem=0;
    for(int i=1;i<=t;i++)
    {
    	cin>>n[i];
    	sto[i]=fibo(n[i]);
	}
    for(int i=1;i<=t;i++)
       cout<<"Fib("<<n[i]<<") = "<<sto[i]<<endl;
   
}


