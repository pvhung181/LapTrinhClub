#include<bits/stdc++.h>

#define endl "\n"
#define fi first
#define se second

using namespace std;

typedef long long ll;

int input() {
	char x; cin >> x;
    if(int(x) < 58 && int(x) > 48) return (int(x) - 48);
    else return 1;
}

void subtract(int &sum) {
	while(sum > 10) sum -= 10;
}

int main()
{   
    int n; cin >> n;
    int per1 = 0, per2 = 0;
    while(n--) {
    	int sum1 = 0, sum2 = 0;
    	for(int i = 1; i <= 3; i++) sum1 += input();
		for(int i = 1; i <= 3; i++) sum2 += input();
		subtract(sum1);
		subtract(sum2);
		if(sum1 > sum2) per1++;
		if(sum1 < sum2) per2++;
    }
    cout << per1 << ' ' << per2;
}
