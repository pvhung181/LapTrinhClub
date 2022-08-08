#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it : m)

using namespace std;

typedef long long ll;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}
int matrix[202][202];
map<pair<int,int>, int> mp;
multiset<int> ans;
int n, m;

int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
int dy[] = {1, 1, 0, -1, -1, -1, 0, 1};

bool check(int x, int y) {
	return x > 0 && y > 0 && x <= n && y <= m;
}

void bfs(int i, int j) {
	queue<pair<int,int>> q;
	int count = 1;
	q.push({i,j});
	mp[{i,j}] = 1;
	while(q.size()) {
		int x = q.front().fi;
		int y = q.front().se;
		q.pop();
		for(int index = 0; index < 8; index++) {
			int tmpX = x + dx[index];
			int tmpY = y + dy[index];
			if(matrix[tmpX][tmpY] == 0 && check(tmpX,tmpY) && mp.find({tmpX,tmpY}) == mp.end()) {
				q.push({tmpX,tmpY});
				mp[{tmpX,tmpY}] = 1;
				count++;
			}
		}
	}
	ans.insert(count);
}


int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    for(int i = 1; i <= n; i++) 
        for(int j = 1; j <= m; j++) 
            cin >> matrix[i][j];
    int res = 0;
    for(int i = 1; i <= n; i++) {
    	 for(int j = 1; j <= m; j++) {
    	 	if(matrix[i][j] == 0 && mp.find({i,j}) == mp.end()) {
    	 		bfs(i,j);
    	 		res++;
    	 	}
		 }
	}
    cout << res << endl;
    for(auto it : ans) cout << it << ' ';
}

