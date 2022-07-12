#include <bits/stdc++.h>
using namespace std;
void solve()
{
	string str;
	cin >> str;
	//((CHOH)2(COOH)2H2O)4
    // quy uoc '(' == 0
	stack <int> st;
	for (int i=0; i<str.size(); i++){
		if (str[i]=='(')
			st.push(0);
		if (str[i]=='H')
			st.push(1);
		if (str[i]=='C')
			st.push(12);
		if (str[i]=='O')
			st.push(16);
		if (str[i]==')'){
			int tong = 0;
			while (st.top()!=0){
				tong+= st.top();
				st.pop();
			}
			st.top() = tong;
		}
		if (str[i]>'0' && str[i]<='9') st.top() *= int (str[i]-'0');
	}
	int ketQua = 0;
	while (st.size()>0)
	{
		ketQua += st.top();
		st.pop();
	}
	cout << ketQua << endl;
}
int main()
{
    int t;
    cin >> t;
    for (int i=0; i<t; i++)
    {
    	solve();	
	}
}
