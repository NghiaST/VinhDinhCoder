#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, l, r) for(int i = r-1; i >=l; i--)
using namespace std;
int n, m;
long long a[100005], res, k, x;
char s[100005];
int main()
{
	gets(s); n = strlen(s);
	REP(i,0,n) {
        if (s[i] != ' ') x++;
        else {
            if (res < x) res = x, k = i - x;
            x = 0;
        }
	}
	if (res < x) k = n - x;
	while (s[k] != ' ' && k < n) putchar(s[k++]);
}
    
