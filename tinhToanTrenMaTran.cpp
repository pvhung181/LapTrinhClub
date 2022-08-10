#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define forit(it,m) for(auto it : m)

using namespace std;

typedef long long ll;

inline ll _gcd(ll a, ll b) {ll r;while(b != 0) {r = a % b;a = b;b = r;}return a;}
inline ll _lcm(ll a, ll b) {return (a * b) / _gcd(a,b);}

ll matrix[105][105];
int cnt = 0;
vector<ll> sumRow, MaxElementInCol;
ll Max = INT_MIN, avg = 0;

void sol( int row, int col) {
	for(int i = 1; i <= row; i++) {
		ll tmp = 0;
		for(int j = 1; j <= col; j++) {
			tmp += matrix[i][j];
			if(i % 2 == 0 && j % 2 != 0 && matrix[i][j] % 3 == 0) {
				cnt++;
				avg += matrix[i][j];
			}
		}
		sumRow.push_back(tmp);
	}

	for(int i = 1; i <= col; i++) {
		Max = INT_MIN;
		for(int j = 1; j <= row; j++) {
			Max = max(Max, matrix[j][i]);
		}
		MaxElementInCol.push_back(Max);
	}
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int row, col; cin >> row >> col;
    for(int i = 1; i <= row; i++)
        for(int j = 1; j <= col; j++) 
             cin >> matrix[i][j];
    sol(row,col);
    
    for(int i = 0; i < sumRow.size(); i++) cout << sumRow[i] << ' ';
    cout << endl; 
    for(ll x : MaxElementInCol) cout << x << ' ';
    if(!cnt) cout << "\nkhong co so thoa man";
    else cout << endl << setprecision(3) << fixed << (float) avg / cnt;

}

