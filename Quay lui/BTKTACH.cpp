#include <iostream>
#include <cstring>
using namespace std;

int n, k, avail[200];
char s[100], f[200];

void dp(int x, int cnt) {
    if (x == n) {
        for(int i=1; i<cnt; i++) putchar(f[i]);
        putchar('\n');
        return;
    }
    int v = s[x] - '0';
    if (v <= k && !avail[v]) {
        avail[v] = true;
        f[cnt] = ' ';
        f[cnt+1] = s[x];
        dp(x+1, cnt+2);
        avail[v] = false;
    }
    v = v*10 + s[x+1] - '0';
    if (v <= k && !avail[v]) {
        avail[v] = true;
        f[cnt] = ' ';
        f[cnt+1] = s[x];
        f[cnt+2] = s[x+1];
        dp(x+2, cnt+3);
        avail[v] = false;
    }
}

int main()
{
    cin >> k >> s;
    n = strlen(s);
    s[n] = 'z';
    dp(0,0);
}
    
