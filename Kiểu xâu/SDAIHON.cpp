#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
using namespace std;
int n, m;
long long res, x;
char s[100005], s2[100005];
int main()
{
	gets(s); n = strlen(s);
    gets(s2);
    if (strlen(s) > strlen(s2)) {
        REP(i,0,n) putchar(toupper(s[i]));
    } else REP(i,0,strlen(s2)) putchar(toupper(s2[i]));
}
    
