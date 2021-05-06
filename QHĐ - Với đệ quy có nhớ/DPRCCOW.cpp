#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
using namespace std;
long long n, m, a[5005], b[5005], f[5005][5005];

void ReadInt(long long &x) {
    char c = getchar();
    while (!isdigit(c) && c != '-') c = getchar();
    long long deg = 1;
    if (c == '-') deg = -1, c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
    x = x*deg;
}

void Enter() {
    ReadInt(n); ReadInt(m);
    FOR(i, 1, n) ReadInt(a[i]);
    FOR(i, 1, m) ReadInt(b[i]);
    sort(a + 1, a + n + 1);
    sort(b + 1, b + m + 1);
}

void Process() {
    FOR(i, 1, n) {
        f[i][i] = f[i-1][i-1] + abs(a[i] - b[i]);
        FOR(j, i + 1, m) f[i][j] = min(f[i][j-1], f[i-1][j-1] + abs(a[i] - b[j]));
    }
    cout << f[n][m];
}

int main()
{
    Enter();
    Process();
}
    
