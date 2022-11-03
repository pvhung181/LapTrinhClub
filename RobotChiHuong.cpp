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
	map<int, string> mp = {{0, "B"}, {1,"DB"}, {2,"D"}, {3,"DN"}, {4, "N"}, {5,"TN"}, {6,"T"}, {7,"TB"}};
	map<string, int> mpDir = {{"B", 0}, {"DB",1}, {"D",2}, {"DN",3}, {"N", 4}, {"TN", 5}, {"T", 6}, {"TB", 7}};
    string str; cin >> str;
    pair<int, string> start;
    start.fi = mpDir[str];
    start.se = str;
    cin.ignore();
    cin>>str;
    for(char x:str) {
    	if(x == 'T') {
    		if(start.fi == 0) start.fi = 7;
			else start.fi -= 1;
		} 
		else {
			if(start.fi == 7) start.fi = 0;
			else start.fi += 1;
		}
		start.se = mp[start.fi];
	}
	
	cout << start.se;
}


