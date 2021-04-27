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
	gets(s); res = strlen(s);
	REP(i,0,strlen(s)) {
		if (!i || s[i-1] == ' ') putchar(toupper(s[i]));
		else putchar(tolower(s[i]));
	}
}
    
