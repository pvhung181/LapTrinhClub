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
    int t; cin >>t;
    while(t--)
    {
    	int k; cin >> k;
    for(int i = 1; i <= k; i++)
    {
      	   for(int j = 1; j <= 5*k; j++)
      	    {
      	    	if(j <= k) cout << "*";
      	    	if(j > k && j <= 4*k) cout << ' ';
      	        if(j > 4*k)
      	        {
      	        	for(int f = 4 * k +1; f <= 15*k;f++)
      	        	  cout <<"*";
      	            break;
				  }
      	    	
			  }
			  cout << endl;
	}
	for(int i = k +1 ; i <= 4 * k ; i++)
	{
	     for(int cot = 1; cot <= 15*k;cot++)
	{
	     if(cot <= k || cot > 4 * k && cot <= 5 * k) cout <<"*";
	     if(cot > k && cot <= 4 * k) cout <<' ';
	     if(cot > 5 * k && cot <= 7*k || cot > 8*k && cot <= 10*k) cout << ' ';
	     if(cot > 7*k && cot <= 8*k) cout <<"*";
	     if(cot > 10*k && cot <= 11*k) cout <<"*";
	}
	cout << endl;
	}
    for(int i = 4*k+1 ; i <= 5*k;i++)
    {
    	for(int cot = 1; cot <= 15*k; cot++)
    	{
    		if(cot <= 5*k) cout <<"*";
    		else if(cot > 7*k && cot <= 8*k) cout <<"*";
    		else if(cot > 10*k) cout << "*";
    		else cout <<' ';
		}
		cout << endl;
	}
	cout << endl;
	}
}


