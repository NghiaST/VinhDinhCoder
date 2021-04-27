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
	int i= strlen(s) - 1;
	while(i >= 0 && s[i] != ' ') i--;
	REP(j,i+1,strlen(s)) putchar(s[j]);
}
    
