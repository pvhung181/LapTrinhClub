#include<stdio.h>
#include<math.h>
int main ()
{
     long int n;scanf("%li",&n);
     int a[100006];
     for(int i=1;i<=n;i++)
        scanf("%d",&a[i]);
        long int s1=0,s2=0,s3=0;
    long int dem=n;
    for(int i=1;i<=n;i++)
       s1=s1+pow(a[i],2);
    for(int i=1;i<=n;i++)
      {
      	s2=s2+(a[i]*a[dem]);
      	dem--;
	  }
    for(int i=1;i<n;i++)
      s3=s3+(a[i]*a[i+1]);
    printf("%li\n",s1);
    printf("%li\n",s2);
    printf("%li",s3);
}

