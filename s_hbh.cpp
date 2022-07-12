#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double a,b; cin>>a>>b;
    int x; cin>>x;
	double pi = atan(1)*4;
    cout << fixed<<setprecision(3)<<a*b*sin(x*(pi/180));
}


