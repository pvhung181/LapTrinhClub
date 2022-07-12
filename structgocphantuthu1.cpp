#include<stdio.h>
 typedef struct diem
   {
   	float x;
   	float y;
	} ;
int main ()
{ 
    diem M;
    float hd,td;
	printf("Nhap hoanh do x=");
	scanf("%f",&hd);
	printf("Nhap tung do y=");
	scanf("%f",&td);
	M.x=hd;M.y=td;
	if(M.x >0 && M.y>0)
		printf("\nDiem thuoc goc phan tu thu 1");
	else
	    printf("\nDiem khong thuoc goc phan tu thu 1");
}

