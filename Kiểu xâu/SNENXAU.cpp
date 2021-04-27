#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
using namespace std;
int n, m;
long long a[100005], res, k, x;
char s[100005];
int main()
{
	gets(s); n = strlen(s);
	k = 1;
	REP(i,1,n) {
        if (s[i] == s[i-1]) k++;
        else cout << k << s[i-1], k = 1;
	}
	cout << k << s[n - 1] << '\n';
	///
	gets(s); n = strlen(s);
	k = 0;
	REP(i,0,n) {
        if (isdigit(s[i])) k = (k << 3) + (k << 1) + s[i] - '0';
        else {
            REP(j, 0, k) cout << s[i];
            k = 0;
        }
	}
}
    
