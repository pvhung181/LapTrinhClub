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
    float thue, tien; cin >> thue;
	if(thue >= 0.0 && thue <= 2000.0){
		cout << "Isento";
		return 0;
	}
	else
	{
		if(thue > (float)2000.0 && thue <=  (float)3000.0)
		   tien = (float)((thue - 2000.0) * 0.08);
		else if(thue > (float)3000.0 && thue <= (float)4500.0)
		  tien = (float)(80.0 + (thue - 3000) * 0.18);
		else
		   tien = (float)(350 + (thue - 4500) * 0.28);
		   cout << "R$ "<< fixed << setprecision(2) << tien;
}
}


