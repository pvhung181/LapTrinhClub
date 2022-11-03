#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;
map<char, int> mp = {{'+', 0}, {'-', 0}, {'*', 1}, {'/', 1}};

int cal(int a, int b, char c) {
	if(c == '+') return a+b;
	else if(c == '-') return a-b;
	else if(c == '*') return a*b;
	else return a/b; 
}

int main()
{
	_fastio;
	int a, b, c;
	char op1, op2;
	cin >> a >> op1 >> b >> op2 >> c;
	if(mp[op1] < mp[op2]) cout << cal(a, cal(b,c,op2), op1);
	else cout << cal(cal(a,b,op1), c, op2);
}


