//#include<bits/stdc++.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>



void docDuLieu(char *FileName,int *n,int *m,float **a,float **b)
{
	FILE *f;
	f = fopen(FileName, "r");
	fscanf(f,"%d%d",n,m);
	*a = (float*) calloc(*n + 1, sizeof(float));
	*b = (float*) calloc(*m + 1, sizeof(float));
	
	for(int i = 0; i <= *n; i++) fscanf(f,"%f", *a + i);
	for(int i = 0; i <= *m; i++) fscanf(f,"%f", *b + i);
	
	fclose(f);
}

void in(int n, float *a, char ten)
{
	printf("Da thuc %c ",ten);
	for(int i = 0; i <= n; i++) printf("%f ", a[i]);
	printf("\n");
}

int main()
{
   int n, m;
   char tenfile[50];
   float *a, *b;
   printf("Nhap ten file du lieu :  "); gets(tenfile);
   docDuLieu(tenfile, &n, &m, &a, &b);
   in(n,a,'P');
   in(m,b,'Q');
   
}


