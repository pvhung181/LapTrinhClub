#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ull n; scanf("%lli",&n);
    ull a[n],dem=0;
    ull max=dem;
    map<ull,ull> m;
    for(int i=0;i<n;i++)
       	scanf("%lli",&a[i]);
	for(int i=0;i<n;i++)
	{
		dem=0;
		for(int j=i;j<n;j++)
		{
			m[a[j]]++;
			if(m[a[j]]==2)
			   {
			   m.clear();
			   	break;
			   }
			dem++;
		}
		if(max<dem)
		  max=dem;
	}
     printf("%lli",max);
}


