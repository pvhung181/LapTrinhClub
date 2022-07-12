#include<stdio.h>
long long C(int n, int r) {
    if(r > n - r) r = n - r; // because C(n, r) == C(n, n - r)
    long long ans = 1;
    int i;

    for(i = 1; i <= r; i++) {
        ans *= n - r + i;
        ans /= i;
    }

    return ans;
}
int main()
{
     long long n;scanf("%lli",&n);
     int r=3; 
     if(n<3)
        printf("0");
    else
     printf("%lli",C(n,r));
     
}


