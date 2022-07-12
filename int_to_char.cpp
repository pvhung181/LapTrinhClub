#include<iostream>
#include<algorithm>
using namespace std;
int main ()
{
  int n;
  cin>>n;
  // Co bao nhieu chu so
  string str = to_string(n);
  int idx=str.length();
  cout<<idx<<endl;
  //Tim so dau tien
  cout<<str[0]<<endl;
  //so cuoi cung
  cout<<str[idx-1]<<endl;
  // tong cac chu so
  int sum=0;
  for(int i=0;i<idx;i++)
  		sum = sum + (str[i]-'0');
  cout<<sum<<endl;
  //so dao nguoc
  reverse(str.begin(),str.end());
  cout<<str;
}

