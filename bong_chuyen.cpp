#include<iostream>
#include<iomanip>
using namespace std;
typedef struct cauThu
{
	char ten[30];
	int srv,bl,spi,srvac,blac,spiac;
};
void nhap(struct cauThu ct[],int n)
{
	for(int i=1;i<=n;i++)
	{
		fflush(stdin);
		gets(ct[i].ten);
		fflush(stdin);
		cin>>ct[i].srv>>ct[i].bl>>ct[i].spi;
		fflush(stdin);
		cin>>ct[i].srvac>>ct[i].blac>>ct[i].spiac;
		fflush(stdin);
	}
}
int main()
{
	cauThu ct[100];
	int n;
	cin>>n;
	nhap(ct,n);
	long long sums=0,sumb=0,sumsp=0;
	long long sumsac=0,sumbac=0,sumspac=0;
	for(int i=1;i<=n;i++)
	{
		sums = sums + ct[i].srv;
		sumb = sumb + ct[i].bl;
		sumsp = sumsp +ct[i].spi;
		sumsac = sumsac + ct[i].srvac;
		sumbac = sumbac + ct[i].blac;
		sumspac = sumspac + ct[i].spiac;
	}
	cout<<fixed<<setprecision(2)<<"Service: "<<(float) (sumsac*100)/sums<<"%"<<endl;
	cout<<fixed<<setprecision(2)<<"Block: "<<(float) (sumbac*100)/sumb<<"%"<<endl;
    cout<<fixed<<setprecision(2)<<"Spike: "<<(float) (sumspac*100)/sumsp<<"%";
}


