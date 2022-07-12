#include<stdio.h>

  typedef  struct ngay{int ngay,thang,nam;};

  typedef struct nguoi{
    	char hoten[20];
    	char truong[30];
    	int sbd;
       ngay ngaysinh;
       float toan,ly,hoa;
	};

   void nhap(nguoi thisinh[],int n){
   	 
	   
   	for (int i=1;i<=n;i++){
   		printf("Nhap ho ten : ");
   		fflush(stdin);
		gets( thisinh[i].hoten);
		printf ("\nNgay sinh (dd/mm/yy) : ");
		scanf ("%d/%d/%d",&thisinh[i].ngaysinh.ngay,&thisinh[i].ngaysinh.thang,&thisinh[i].ngaysinh.nam);
	    printf ("\nTruong : ");
	    fflush(stdin);
	    gets(thisinh[i].truong);
	    printf ("\nSBD");
	    scanf("%d",&thisinh[i].sbd);
	    printf ("\nDiem thi toan , Ly , Hoa : ");
	    scanf ("%f%f%f",&thisinh[i].toan,&thisinh[i].ly,&thisinh[i].hoa);
		}
   }
 
   void xuat(nguoi thisinh[],int n){
   	printf ("\nHo va ten         Ngay sinh                Truong                  SBD           Toan     Ly      Hoa      ");
   	for (int i=1;i<=n;i++){
   		printf ("\n %10s %d/%d/%d  %12s %d %.2f %.2f %.2f",thisinh[i].hoten,thisinh[i].ngaysinh.ngay,thisinh[i].ngaysinh.thang,thisinh[i].ngaysinh.nam,
		   thisinh[i].truong,thisinh[i].sbd,thisinh[i].toan,thisinh[i].ly,thisinh[i].hoa);
	   }
   }
    
int main (){
	int n;
	nguoi thisinh[100];
	printf ("Nhap n : ");
	scanf ("%d",&n);
	nhap(thisinh,n);
	printf ("%s",thisinh[1].hoten);
	
	return 0;
}
   
   


