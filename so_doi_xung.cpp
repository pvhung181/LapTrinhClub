#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

int main ()
{
    ull n; cin >> n;
    ull dem = 0;
    string str = to_string(n);
    int len = str.length() - 1;
    if(len == 2)
    {
    	if(str[0] == str[1])
    	   cout<<"YES";
    	else
    	   cout<<"NO";
	}else{
    for(int i = 0; i < str.length() / 2; i++)
    {
    	if(str[len] != str[i])
    	{
    		cout << "NO";
    		len--;
    		break;
		}else{
				dem++;
				len--;
	}
	}
	if(dem == str.length() / 2)
	  cout << "YES";
}
}
    

