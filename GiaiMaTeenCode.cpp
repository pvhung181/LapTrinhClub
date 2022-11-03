#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

void to_lower(string &teen) {
	for(char &x:teen) {
		if(int(x) >= 65 && int(x) <= 90) x = char(x+32);
	}
}

int main()
{
    _fastio;
    int n; cin >> n; cin.ignore();
    string teenCode; 
    getline(cin,teenCode); fflush(stdin);
    to_lower(teenCode);
    multimap<string,int> mp;
    for(int i = 1; i <= n; i++) {
    	string mess; getline(cin,mess);
    	fflush(stdin);
    	stringstream s(mess);
    	string token, temp = "";
    	while(s >> token) temp.push_back(token[0]);
		to_lower(temp);
		if(strcmp(temp.c_str(),teenCode.c_str()) == 0) mp.insert(pair<string,int>(mess, 1));
	}
	cout << mp.size() << endl;
	for(auto x:mp) cout << x.fi << endl;
}
