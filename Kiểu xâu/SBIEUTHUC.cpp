#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
using namespace std;
int n, m;
long long a[100005], res, k, x, sum;
char s[100005];
int main()
{
	gets(s); n = strlen(s);
	k = 1;
	REP(i,0,n) {
        if (isdigit(s[i])) x = (x << 3) + (x << 1) + s[i] - '0';
        else sum += x * k, x = 0, k = (s[i] == '+' ? 1 : -1);
	}
	sum += x * k;
	cout << sum;
}
    
