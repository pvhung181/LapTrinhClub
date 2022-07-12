#include<stdio.h>
main(){
   int n; scanf("%d",&n);
   long long sum=1;
    for(int i=2;i<=n;i++)
	   sum= i*sum;
    printf("%lli",sum);
}


