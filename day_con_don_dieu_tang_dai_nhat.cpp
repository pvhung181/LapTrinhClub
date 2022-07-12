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
    int n; cin >> n;
    vector<int> a(n);
    vector<int> L(n,1);
    for(int i = 0; i < n; i++) cin >> a[i];
   for(int i = 0; i < n; i++)
   	 for(int j = 0; j < i; j++)
    	if(a[i] > a[j])
    	  L[i] = max(L[i],L[j] + 1);  
   cout << *max_element(L.begin(),L.end()) ;
}


