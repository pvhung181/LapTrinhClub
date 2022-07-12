//#include<stdio.h>
//#include<math.h>
//    long long giaiThua(int n)
//    {
//    	long long gt=1;
//    	for(int i=1;i<=n;i++)
//    	   gt=gt*i;
//    	return gt;
//	}
//	
//	float tinhToan(int a , int b,char c)
//	{
//		if(c=='+')	return a+b;
//		if(c=='-')  return a-b;
//		if(c=='*')  return a*b;
//		if(c=='/')  return (float)a/b;
//    }
//    
//    float kc(float x1,float y1,float x2, float y2)
//    {
//      return sqrt(pow(x1-x2,2)+(y1-y2,2));
//	}
//	
//    
//int main()
//{
//	///////////////////bai 1
////     int n ; scanf("%lli",&n);
////    printf("%lli",giaiThua(n));
//	///////////////////bai 2
////      char c; 
////      int a,b; scanf("%d%c%d",&a,&c,&b);
////      printf("%f",tinhToan(a,b,c));
//    	///////////////////bai 4
//  
//
//
//








#include<stdio.h>
#include<math.h>
 float kc(float x1, float y1, float x2, float y2)
    {
      return sqrt(pow(x1-x2,2)+(y1-y2,2));
	}
int main()
{
		float x1,x2,y1,y2;
    	scanf("%f%f%f%f",&x1,&y1,&x2,&y2);
    	printf("%f",kc(x1,y1,x2,y2));
}
