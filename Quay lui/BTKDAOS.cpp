#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int n, cnt, res, f[10], ans[10];
char s[10];

void dp1(int x) {
    if (x == n) { res++; return; }
    for(int i=0; i<=cnt; i++) if (f[i]) {
        f[i]--;
        ans[x] = i;
        dp1(x+1);
        f[i]++;
    }
}

void Print() {
    for(int i=0; i<n; i++) cout << s[ans[i]];
    cout << '\n';
}

void dp(int x) {
    if (x == n) { Print(); return; }
    for(int i=0; i<=cnt; i++) if (f[i]) {
        f[i]--;
        ans[x] = i;
        dp(x+1);
        f[i]++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> s; n = strlen(s);
    sort(s, s+n);
    f[0] = 1;
    for(int i=1; i<n; i++)
        if (s[i] == s[i-1]) f[cnt]++;
        else f[++cnt]++, s[cnt] = s[i];
    dp1(0);
    cout << res << '\n';
    dp(0);
}
    
