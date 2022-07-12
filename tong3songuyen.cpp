#include<iostream>
using namespace std;
int main ()
{
   int n,s;
   int dem=0;
   cin >> n ;
   cin >> s;
   for (int i=0;i<=n;i++)
       for(int j=0;j<=n;j++)
          for(int k=0;k<=n;k++)
          {
          	if(i+j+k==s)
          	  dem++;
		  }
	cout << dem;
}

