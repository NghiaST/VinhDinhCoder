#include <iostream>
#include <algorithm>
#define N 1105
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
int m, n, k;
long long g[N][N];

void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c) && c != '-') c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

int main() {
    ReadInt(m); ReadInt(n); ReadInt(k);
    int x1, y1, x2, y2, val;
    while (k--) {
        ReadInt(x1), ReadInt(y1);
        ReadInt(x2), ReadInt(y2);
        ReadInt(val);
        g[x1][y1] += val;
        g[x1][y2+1] -= val;
        g[x2+1][y1] -= val;
        g[x2+1][y2+1] += val;
    }
    FOR(i, 1, m) {
        FOR(j, 1, n) {
            g[i][j] += g[i-1][j] + g[i][j-1] - g[i-1][j-1];
            cout << g[i][j]+1 << ' ';
        }
        putchar('\n');
    }
}
    
