#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll n,dem=0,x=0; cin >> n;
    string str;
    cin.ignore();
    getline(cin,str);
    stack<char> st;
    for(char &t:str)
    {
    	if(dem == 0)
    	{
    		st.push(t);
    		dem++; x++;
    		continue;
		}
        if(dem > 0)
        {
         if(t != st.top())
    	   {
    	   	 st.push(t);
    	   	 x++;
		   }
		}
	}
	int j = x - 1;
	char s[x];
	for(int i = 0 ; i < x; i++)
	{
		s[j--] = st.top();
		st.pop();
	}
	for(int i = 0; i < x; i++)
	   cout<<s[i];

}


