#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it : m)

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef long double ld;

const ll  mod = 1e9+7;
const ll N = 1e5 + 5;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

bool sol(string str) {
	stack<char> st;
	bool checkPare = false, checkSquare = false;
	for(char character : str) {
		if(character == ')' && st.empty() || character == '}' && st.empty() || character == ']' && st.empty() ) return false;
		if(character == '(') {
			st.push('(');
			checkPare = true;
		}
		if(character == '[') {
			if(checkPare) return false;
			st.push('[');
			checkSquare = true;
		}
		if(character == '{') {
			if(checkPare || checkSquare) return false;
			st.push('{');
		}
		if(character == ')') {
			if(st.top() == '(') {
				st.pop();
				checkPare = false;
			}
			else st.push(')');
		}
		if(character == ']') {
			if(st.top() == '[') {
				st.pop();
				checkSquare = false;
			}
			else st.push(']');
		}
		if(character == '}') {
			if(st.top() == '{') st.pop();
			else st.push('}');
		}
	}
	if(st.empty()) return true;
	return false;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	int t; cin >> t;
	while(t--) {
		string str; cin >> str;
		if(sol(str)) cout << "Dung" << endl;
		else cout << "Sai" << endl;
    }
}


