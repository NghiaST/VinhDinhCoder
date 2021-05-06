#pragma GCC optimize("O3")
#include <iostream>
#define N 505
#define LL 205
#define FOR(i, l, r) for(int i=l; i<=r; i++)
//#define uuu(a, b, c, mod) if (!f[a][b][c][mod]) S[mod][++r[mod]] = {a, b, c}; f[a][b][c][mod] = true;
using namespace std;

int t, n, L, mod, res, vv, r[2], yc[N], f[LL][LL][LL][3], C[LL][LL];
struct Data{ int a, b, c;} S[2][LL*LL*6], d;

void ReadInt(int &num) {
    char c;
    while (c = getchar(), !isdigit(c));
    num = c - 48;
    while (c = getchar(), isdigit(c)) num = (num << 3) + (num << 1) + c - 48;
}

void uuu(int a, int b, int c, int mod, int value) {
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);
    if (!f[a][b][c][mod]) S[mod][++r[mod]] = {a, b, c};
    f[a][b][c][mod] = true;
    f[a][b][c][2] = min(f[a][b][c][2], value);
}

void process() {
    r[1] = 1, S[1][1] = {1,2,3};
    f[1][2][3][2] = 0;
    FOR(i, 1, n) {
        mod = i % 2; vv = yc[i];
        while (r[mod]) {
            d = S[mod][r[mod]--];
            f[d.a][d.b][d.c][mod] = false;
            int x = f[d.a][d.b][d.c][2];
            if (d.a == vv || d.b == vv || d.c == vv) {
                uuu(d.a, d.b, d.c, mod ^ 1, x);
            } else {
                uuu(d.a, d.b, vv, mod ^ 1, x + C[d.c][vv]);
                uuu(d.b, d.c, vv, mod ^ 1, x + C[d.a][vv]);
                uuu(d.a, d.c, vv, mod ^ 1, x + C[d.b][vv]);
                /*f[d.a][d.b][vv][2] = min(f[d.a][d.b][d.c][2] + C[d.c][vv], f[d.a][d.b][vv][2]);
                f[d.a][vv][d.c][2] = min(f[d.a][d.b][d.c][2] + C[d.b][vv], f[d.a][vv][d.c][2]);
                f[vv][d.b][d.c][2] = min(f[d.a][d.b][d.c][2] + C[d.a][vv], f[vv][d.b][d.c][2]);*/
                f[d.a][d.b][d.c][2] = 1e9;
            }
        }
    }
    res = 1e9;
    FOR(i, 1, L) FOR(j, 1, L) {
        res = min(min(min(res, f[i][j][yc[n]][2]), f[i][yc[n]][j][2]), f[yc[n]][i][j][2]);
    }
    cout << res << '\n';
    ///
    mod = (n + 1) % 2;
    while (r[mod]) {
        d = S[mod][r[mod]--];
        f[d.a][d.b][d.c][mod] = false;
        f[d.a][d.b][d.c][2] = 1e9;
    }
}

int main()
{
    ReadInt(t);
    FOR(i, 1, LL-1) FOR(j, 1, LL-1) FOR(k, 1, LL-1) f[i][j][k][2] = 1e9;
    while (t--) {
        ReadInt(L), ReadInt(n);
        FOR(i, 1, L) FOR(j, 1, L) ReadInt(C[i][j]);
        FOR(i, 1, n) ReadInt(yc[i]);
        process();
    }
}
    
