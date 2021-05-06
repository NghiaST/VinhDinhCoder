#include <iostream>
#include <cstring>
#define N 105
using namespace std;
int t, n, k, z, cnt, avail[N][N];
long long dp[N][N];
char s[N];

long long get_res(int x, int num) {
    if (x == n) return (!num ? 0 : -1e15);
    if (num == 0) return -1e15;
    if (avail[x][num] == cnt) return dp[x][num];
    avail[x][num] = cnt;
    dp[x][num] = -1e15;
    long long val = 0;
    for(int i=x; i<n; i++) {
        val = val*10 + s[i] - '0';
        if (val > z) break;
        dp[x][num] = max(dp[x][num], get_res(i+1, num-1) + val);
    }
    return dp[x][num];
}

int main()
{
    scanf("%d", &t);
    while (t--) {
        scanf("%d%d%s", &k, &z, &s);
        n = strlen(s);
        ++cnt;
        cout << max(get_res(0, k), -1ll) << '\n';
    }
}
    
