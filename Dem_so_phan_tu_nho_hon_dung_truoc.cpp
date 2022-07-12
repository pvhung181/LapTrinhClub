#include<stdio.h>
int kiemTra(long int a[],long int n)
{
	int dem=0;
	if(n<2)
	  return 0;
	else{
		for(int i=1;i<n;i++)
		   if(a[n]>a[i])
		      dem++;
		return dem;
	}
}
int main()
{
	long int n;
	scanf("%li",&n);
	long int a[100006];
	for(int i=1;i<=n;i++)
	   scanf("%li",&a[i]);
	for(int i=1;i<=n;i++)
	   printf("%li ",kiemTra(a,i));
}
