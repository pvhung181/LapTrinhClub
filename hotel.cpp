#include<iostream>
using namespace std;
int main ()
{
   int n,k,x,y;
  cin>>n>>k>>x>>y;
  unsigned long tong=0;
  if(n>=k){
  for(int i=1;i<=k;i++)
  	tong=tong+x;
  for(int i=k+1;i<=n;i++)
    tong=tong+y;
}else{
	for(int i=1;i<=n;i++)
	  tong=tong+x;
}
  cout<<tong;
}

