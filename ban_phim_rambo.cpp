#include<bits/stdc++.h>

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string str;
    stack<char> st;
    getline(cin,str);
    for(char &c:str)
    {
    if(c == 'B')
        {
        if(st.empty())
           continue;
        else{
    	  {
    	  	 st.pop();
    	  	 continue;
		  }
		}
		}
    	st.push(c);
	}
	char s[15];
	int j = 0;
    while(!st.empty())
    {
    	s[j] = st.top();
    	st.pop();
    	j++;
	}
	for(int i = j - 1; i >= 0; i--)
	  cout<<s[i];
}  


