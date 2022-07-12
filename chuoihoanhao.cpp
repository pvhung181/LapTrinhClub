#include<bits/stdc++.h>
#include<map>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  =3.141592653589793238463;
const ll  M=1e9+7;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string str;
    cin>>str;
    map <char,int> m;
    for(char c:str)
        m[c]++;
    for(auto it:m)
    {
    	if(it.second%2!=0) 
    	{
    		cout<<"No";
    		return 0;
		}
	}
    cout<<"Yes";
    return 0;
}


