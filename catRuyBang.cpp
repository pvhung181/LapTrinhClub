// test 3999 2 2 3999 : TLE
#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it = m.begin(); it != m.end(); it++)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

int arr[4];
int a, b, c, n;
int sum = 0;
int cnt = 0;
int check = 0;
int MAX = INT_MIN;
void Try(int k)
{
	for(int i = 1; i <= 3; i++)
	{
		if(check) return;
		sum += arr[i];
		cnt++;
		if(sum == n)
		{   check++;
			MAX = max(MAX,cnt);
			return;
		}
		if(sum > n)
		{
		   	sum -= arr[i];
		   	cnt--;
		   	return;
		}
		Try(k + 1);
		sum -= arr[i];
		cnt--;
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> arr[1] >> arr[2] >> arr[3];
    sort(arr + 1, arr + 4);
    Try(1);
    cout << MAX;
//    for(int i = 1; i < 4; i++) cout << arr[i] << ' ';
    
}


