#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second
#define _fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

using namespace std;
 
typedef long long ll; 

deque<ll> kq;

void apart(ll n) {
	string num = to_string(n);
	int check = num[0] - '0' + num[num.length() - 1] - '0';
    if(check <= 9) {
        num.erase(0,1);
        num.pop_back();
        num.push_back(char(check + '0'));
        kq.push_back(stol(num));
        num.pop_back();
        num = char(check + '0') + num;
        kq.push_back(stol(num));
	}
} 

int main()
{
    _fastio;
    ll n; cin >> n;
    kq.push_back(n);
    map<ll,ll> mp;
    while(kq.size()) {
    	apart(kq.front());
    	mp[kq.front()]++;
    	kq.pop_front();
	}
	cout << mp.begin()->fi;
}
