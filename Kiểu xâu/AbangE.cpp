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
	REP(i,0,n) {
        if (i < n-2 && s[i] == 'a' && s[i+1] == 'n' && s[i+2] == 'h') {
            cout << "em";
            i += 2;
        } else putchar(s[i]);
	}
}
    
