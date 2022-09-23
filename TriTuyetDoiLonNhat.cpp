#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define __fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

int main() {
    __fastio;
   ll n; cin >> n;
   ll a[n];
   for(ll i = 0; i < n; i++) cin >> a[i];
   sort(a, a+ n);
   ll Max1 = abs(a[0] + a[1]), Max2 = abs(a[n - 1] + a[n - 2]);
   cout << max(Max1, Max2);
}

