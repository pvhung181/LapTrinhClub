#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;

typedef long long ll;

inline int Min(int a, int b, int c) {
	return (a > b) ? ((b > c) ? c : b) : ((a > c) ? c : a);
}

map<int,string> mp = {{1, "Ngan xep"}, {2, "Hang doi"}, {3, "Hang doi uu tien"}};

void sol() {
	int n, val; cin >> n;
	string str;
	int check = n;
	stack<int> st;
	queue<int> q;
	priority_queue<int> pq;
	vector<pair<int,int>> v = {{1,n}, {2,n}, {3,n}};
	for(int i = 1; i <= n; i++) {
		cin >> str >> val;
		if(str == "vao") {
			st.push(val);
			q.push(val);
			pq.push(val);
		}
		else {
			check--;
			if(st.top() == val) v[0].se--, st.pop();
			
			if(q.front() == val) v[1].se--, q.pop();
			
			if(pq.top() == val) v[2].se--, pq.pop();			
		}
	}
	int m = Min(v[0].se, v[1].se, v[2].se);
	if(m != check) cout << "Khong thuoc" << endl;
	else {
		int cnt = 0, key = 0;
		for(auto it:v) {
			if(it.se == check) {
				key = it.fi;
				cnt++;
			}
		}
		if(cnt > 1) cout << "Khong chac" << endl;
		else cout << mp[key] << endl;
	}
}

int main()
{
	_fastio;
	int t; cin >> t;
	for(int i = 1; i <= t; i++) sol();
}


