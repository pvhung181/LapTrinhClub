#include<bits/stdc++.h>

#define endl "\n"
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int a, b; cin >> a >> b;
    string so[11] = {"khong","mot","hai","ba","bon","nam","sau","bay","tam","chin","muoi"};
    for(int i = a; i <= b; i++)
    {
    	if(i == 10)
    	{
    		cout << "muoi" << endl;
    		continue;
		}
    	if(i % 100 == 0 && i != 1000)
    	{
    		cout << so[i / 100] << " tram" << endl;
    		continue;
		}
		if(i == 1000)
		{
			cout << "mot nghin" << endl;
			continue;
		}
	   
    	string tmp = to_string(i);
			if(i > 10 && i < 20)
		{
		    if(i == 15) cout << "muoi lam" << endl;
			else	
			cout << "muoi " << so[tmp[1] - '0'] << endl;
			continue;
		}
    	if(tmp.length() == 3)
    	{
    		if(tmp[1] == '0')
    		{
    				cout << so[tmp[0] - '0'] << " tram linh " << so[tmp[2] - '0'] << endl;
			}
			else if(tmp[1] == '1')
			{
				if(tmp[2] == '0')
				    cout << so[tmp[0] - '0'] << " tram muoi" << endl;
				else if(tmp[2] == '5')
				  cout << so[tmp[0] - '0'] << " tram muoi lam" << endl;
				else 
				   cout << so[tmp[0] - '0'] << " tram muoi " << so[tmp[2] - '0'] << endl;
			}
			else if(tmp[2] == '0')
			{
				cout << so[tmp[0] - '0'] << " tram " << so[tmp[1] - '0'] <<" muoi"<< endl;
			}
			else
			{
			if(tmp[2] == '5')
    	    	cout << so[tmp[0] - '0'] << " tram " << so[tmp[1] - '0'] << " muoi lam" << endl;
    	    else
    	        cout << so[tmp[0] - '0'] << " tram " << so[tmp[1] - '0'] << " muoi " << so[tmp[2] - '0'] << endl;
			}
    
		}
    	else if(tmp.length() == 2)
    	{
    		if(tmp[1] == '0')
    		{
    			cout << so[tmp[0] - '0'] << " muoi " << endl;
			}
			else
			{
			if(tmp[1] == '5')
    		 cout << so[tmp[0] - '0'] << " muoi lam" << endl;
    		else
    		 cout << so[tmp[0] - '0'] << " muoi " << so[tmp[1] - '0'] << endl;
			}
    		
		}
    	else
    	{
    		cout << so[i] << endl;
		}
	}
    
}

