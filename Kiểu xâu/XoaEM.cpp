#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
using namespace std;
int n, m;
long long res, x, a[100005];
char s[100005], s2[100005];
int main()
{
	gets(s); n = strlen(s);
	s2[0] = s[0];
	REP(i,1,n) {
	    if (x >= 0 && s2[x] == 'e' && s[i] == 'm') x--;
	    else s2[++x] = s[i];
    }
    FOR(i,0,x) putchar(s2[i]);
}
    
