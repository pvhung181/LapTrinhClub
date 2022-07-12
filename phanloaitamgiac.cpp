#include<iostream>
using namespace std;
int main ()
{
  float a,b,c;
  cin>>a>>b>>c;
  if(a + b > c && a + c > b && b + c > a)
    {
    	if(a == b && a == c) cout<<"TAM GIAC CAN";
    	else if(a == b || a == c || b == c) cout<<"TAM GIAC CAN";
    	else if(a*a + b*b == c*c || a*a + c*c == b*b || c*c + b*b == a*a ) cout<<"TAM GIAC VUONG";
    	else cout<<"TAM GIAC THUONG";
	}
	else cout<<"KHONG PHAI TAM GIAC";
}

