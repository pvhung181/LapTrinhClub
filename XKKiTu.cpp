#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    int k;
    string str;
    while(t--)
    {
       cin >> k;
	   cin.ignore(); getline(cin,str);
	   for(char &c:str)   
	      for(int i = 1; i <= k;i++)
	   	    cout<<c;
	    cout<<endl;
	}
}


