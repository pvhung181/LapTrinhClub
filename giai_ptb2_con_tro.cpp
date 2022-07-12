#include<bits/stdc++.h>
#define endl '\n'
#pragma GCC optimize("Ofast")
using namespace std;
 
typedef unsigned long long ull;
typedef long long ll;
 
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define rall(c) (c).rbegin(), (c).rend()
#define sz(x) (int)(x).size()
#define ff first
#define ss second
#define ii pair <int, int>
#define llll pair <ll, ll>
 
const ll MOD = 1e9+7;
 
// http://w...content-available-to-author-only...d.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
// freopen("Input.txt", "r", stdin);
// freopen("Output.txt". "w", stdout);
int Sol(double a, double b, double c, double *x1, double *x2)
{
	if (a == 0)
	{
		if (!b)
		{
			if(!c) return 1;
			else return 0;
		}	
		else
		{
			if (!c) 
			{
				*x1 = *x2 = 0;
				return 2;
			}
			else 
			{
				*x1 = *x2 = -c/b;
				return 2;
			}
		}
	}
	else 
	{
		if (!b)
		{
			if (!c) 
			{
				*x1 = *x2 = 0;
				return 2;
			}
			else 
			{
				double tmp = -c/a;
				if (tmp < 0) return 0
				else if (tmp > 0) 
				{
					*x1 = sqrt(tmp);
					*x2 = -sqrt(tmp);
					return 2;
				}
				else 
				{
					*x1 = *x2 = 0;
					return 2;
				}
			}
		}
		else
		{
			if (!c) printf("x1 = 0, x2 = %.2f", -b/a);
			else 
			{
				double delta = b*b - 4*a*c;
				if (delta < 0) return 0;
				else if (delta > 0)
				{
					*x1 = (-b-sqrt(delta))/(2*a);
					*x2 = (-b+sqrt(delta))/(2*a);
					return 2;
				}
				else 
				{
					*x1 = *x2 = -b/(2*a);
					return 2;
				}
			}
		}
	}
}
 
int main()
{
	ios::sync_with_stdio(NULL); cin.tie(0); cout.tie(0);
	while(1)
	{
		double a, b, c, x1, x2; scanf("%lf%lf%lf", &a, &b, &c);
		int k = Sol(a, b, c, &x1, &x2);
		if (k == 0) printf("Vo nghiem");
		else if(k == 1) printf("Vo so nghiem");
		else if (k == 2)
		{
			printf("x1 = %.2f, x2 = %.2f", x1, x2);
		}
		printf("\n");
	}
}
