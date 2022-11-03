#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main ()
{
    long long n,m;
    long long int x;
    cin>>n>>m;
    x=pow(n,m);
    string s = to_string(x);
    cout<<s[s.length()-1];
}

