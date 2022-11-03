#include<iostream>
using namespace std;
int main ()
{
  int n,diem=0;cin>>n;
  char a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  for(int i=0;i<n;i++)
    {
    	if(a[i]=='t')
    	   diem++;
    	if(a[i]=='M' || a[i]=='T')
    	   diem=diem+3;
    	if(a[i]=='X')
    	   diem=diem+5;
    	if(a[i]=='H')
           diem=diem+9;
    	if(a[i]=='V')
    	   diem=diem+0;
	}
	cout<<diem;
}

