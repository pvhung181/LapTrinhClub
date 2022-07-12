#include<iostream>
using namespace std;
int main ()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
     {
     	cin>>a[i];
	 }
	int min=a[0];
	int vt=0;
	for(int i=0;i<n;i++)
	{
		if(min>a[i])
		   {
		   	min=a[i];
		    vt=i;
		   }
	}
	cout<<"Menor valor: "<<min<<endl;
	cout<<"Posicao: "<<vt;
}

