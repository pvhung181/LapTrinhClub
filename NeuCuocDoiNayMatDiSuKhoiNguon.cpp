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
    string a,b,tmpa,tmpb;
    cin >> a;
    cin.ignore();
    cin >> b;
    ll res2,res1 = stoll(a);
             res2 = stoll(b);
    ll sum1 = res1 + res2;
    string strtmp1, strsum = to_string(sum1);
    for(char &x:strsum)
      if(x != '0')
        	 strtmp1.push_back(x);
    ll afterSum = stoll(strtmp1);
   for(char &x:a)
      if(x != '0')
        	 tmpa.push_back(x);

     for(char &x:b)
      if(x != '0')
        	 tmpb.push_back(x);
    ll tmp1 , tmp2;
    tmp1 = stoll(tmpa);
    tmp2 = stoll(tmpb);
    if(afterSum == tmp1 + tmp2)
       cout << "YES";
    else 
       cout << "NO";
}


