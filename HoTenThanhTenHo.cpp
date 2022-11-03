#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

void sol() {
	string str; getline(cin,str);
	stringstream s(str);
	string word;
	vector<string> v;
	while(s >> word) {
		v.push_back(word);
	}

	for(int i = 1; i < v.size(); i++) cout << v[i] << ' ';
	cout << v[0] << ' ';
}

int main()
{
	_fastio;
	sol();
}


