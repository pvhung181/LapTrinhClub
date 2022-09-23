#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

class ps {
	public:
		ll tu = 1, mau;
		ps(ll mau) {
			this->mau = mau;
		}
		ps() {
		}
	    friend ps operator + (ps, ps);
	    friend ostream& operator << (ostream&, ps);
};

ps operator + (ps fi, ps se) {
	ps tmp;
	tmp.tu = fi.tu * se.mau + fi.mau * se.tu;
	tmp.mau = fi.mau * se.mau;
	ll g = __gcd(tmp.mau, tmp.tu);
	tmp.tu /= g;
	tmp.mau /= g;
	return tmp;
}

ostream& operator << (ostream& out , ps a) {
	out << a.tu << '/' << a.mau << endl;
	return out;
}

int main()
{
	_fastio;
	int t; cin >> t;

	while(t--) {
		ps start(1);
	    int n; cin >> n;
    	for(int i = 2; i <= n; i++) {
		    ps x(i);
	    	start = start + x;
	    }
    	cout << start;
	}
}


