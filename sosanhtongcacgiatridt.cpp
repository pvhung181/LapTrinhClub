#include<stdio.h>

int main ()
{
	int n,dem=0;
	printf ("nhap n ");
	scanf ("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&a[i]);
	}
    int sum=a[0]+a[1];
	for (int i=2;i<n;i++){
		if(sum==a[i]){
			printf ("\nso %d bang tong gia tri cua cac phan tu dung truoc no ",a[i]);
			dem=dem+1;
		}
		sum=sum+a[i];
	
	} 
	if (dem ==0){
		printf ("khong co gia tri nao bang tong cac gia tri dung truoc no");
	}
	return 0;
}
    



   


