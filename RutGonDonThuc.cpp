#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

int main()
{
	_fastio;
	map<char, int> mp;
	string str; cin >> str;
	for(char ch : str) mp[ch]++;
	for(auto it : mp) cout << "(" << it.fi << '^' << it.se <<")";
}

