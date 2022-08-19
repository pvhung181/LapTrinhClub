#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it : m)

using namespace std;

typedef long long ll;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

void inputArr(int start, int end, ll arr[]) {
	for(int i = start; i < end; i++) cin >> arr[i];
}

int main() {
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n; fflush(stdin);
	string str; cin >> str;
    reverse(str.begin(), str.end());
    cout << str;
}

