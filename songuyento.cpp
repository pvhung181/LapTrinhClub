#include<stdio.h>
int main(){
int n,dem=0,i=2;
   scanf ("%d",&n);
  if(i>n){
  			printf("n khong la so nguyen to");
}else{
       for (int i=2;i<n;i++){
       	if (n%i==0){
       		printf ("n khong la so nguyen to ");
       		break;
		   }
	   }
	   for (int i=2;i<n;i++){
	   	if(n%i==0){
	   		dem =dem+1;
		   }
	   }
	   if (dem ==0){
	   	printf ("n la so nguyen to");
	   }
	   }
       return 0; 
}
