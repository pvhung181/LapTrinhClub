#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int kiemTra(string str,int len)
{
	if(str[len-1]=='1') return 1;
	if(str[len-1]=='2') return 1;
	if(str[len-1]=='3') return 1;
	if(str[len-1]=='5') return 1;
	if(str[len-1]=='6') return 1;
	if(str[len-1]=='8') return 1;
	if(str[len-1]=='9') return 1;
	if(str[len-1]=='4') return 0;
	if(str[len-1]=='7') return 0;
	if(str[len-1]=='0') return 0;
}
int main()
{
     string str;
     getline(cin,str);
     long long len = str.length();
    char a=str[len-1],b='4',c='7',d='0';
     if(len==10)
     {
         if(str[0]== '0' && kiemTra(str,len) == 1 ) cout<<"YES";
		else cout<<"NO";	
	 }else	cout<<"NO";
}


