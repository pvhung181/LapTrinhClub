//BAI THUC HANH 1 bai 3    TG Pham Viet Hung
#include <stdio.h>
int main(){
	int n,dem =0;
	printf ("Nhap n = ");
	scanf ("%d",&n);
	int arr[n];
	for (int i=0;i<n;i++){
		scanf ("%d",&arr[i]);
	}
	if(n<3){
		printf ("khong the thanh cap so cong");
	}else{
	for (int i=0;i<n-2;i++){
		for (int j=i+1;j<n-1;j++){
			for (int k=i+2;k<n;k++){
				if(2*arr[j]==arr[i]+arr[k] || 2*arr[i]==arr[j]+arr[k] || 2*arr[k]==arr[i]+arr[j] ){
					dem=dem+1;
				}
				break; 
			}
			break;
		}
	}
	printf ("co %d bo so lien tiep trong day tao thanh mot cap so cong",dem);
}
	return 0;
}
