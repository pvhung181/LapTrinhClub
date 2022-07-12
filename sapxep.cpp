#include<stdio.h>
#include<math.h>
int main(){
     int n;
     printf ("nhap n = ");
     scanf ("%d",&n);
     float arr[n],dem;
     float x;
     printf ("nhap x =");
     scanf ("%f",&x);
     for (int i=0;i<n;i++){
     	scanf ("%f",&arr[i]);
	 }
	 
	 for (int i=0;i<n-1;i++){
	 	for (int j=i+1;j<n;j++){
	 	 if(arr[i] > arr[j]){
                // Hoan vi 2 so a[i] va a[j]
                dem = arr[i];
                arr[i] = arr[j];
                 arr[j] = dem; 
            }
		 }
	 }
      if (x>arr[0] && x<arr[n-1]){
      	printf ("n thuoc day");
	  }else{
	  	printf ("n khong thuoc day");
	  }
	return 0;
   
}
	
	
 
