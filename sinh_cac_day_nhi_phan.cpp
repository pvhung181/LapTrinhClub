#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const double PI  = 3.141592653589793238463;
const ll  mod = 1e9+7;

void sinh(int a[], int n, int &ok)
{
	int i = n;
	while(i >= 1 && a[i] == 1)
	   {
	   	a[i] = 0;
	   	i--;
	   }
	if(i == 0)
	   ok = 0;
	else
	   a[i] = 1;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n, ok = 1; cin >> n;
    int a[n+1] = {0};
    while(ok)
    {
    	for(int i = 1; i <= n; i++)
    	   cout << a[i];
    	cout<<endl;
    	sinh(a,n,ok);
	}
	 
}


