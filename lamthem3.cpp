#include<stdio.h>
#include<math.h>
int main ()
{
   int n;
   printf("n = ");
   scanf ("%d",&n);
   float x;
   printf ("x = " );
   scanf ("%f",&x);
   float s=0;
   int mau=0;
   for (int i=1;i<=n;i++)
   {
   	mau=mau+i;
   	s=s+(pow(x,i)/mau);
   }
   printf ("S=%.2f",s);
}

