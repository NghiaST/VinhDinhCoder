#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i = l; i <= r; i++)
#define REP(i, l, r) for(int i = l; i < r; i++)
#define REPD(i, r, l) for(int i = r-1; i >= l; i--)
#define N 66
using namespace std;
const long long mod = 1e9 + 7;
long long n, m, f[N][N][N], v[N][N][N];
char a[N], b[N], c[N];
int La, Lb, Lc;

long long get_res(int i, int j, int k) {
    if (!k) return 1;
    if (i < 0 || j < 0) return 0;
    if (v[k][i][j]) return f[k][i][j];
    v[k][i][j] = true;
    long long sum = 0;
    FOR(x, 1, i) if (a[x] == c[k]) sum = (sum + get_res(x-1, j, k-1)) % mod;
    FOR(x, 1, j) if (b[x] == c[k]) sum = (sum + get_res(i, x-1, k-1)) % mod;
    return f[k][i][j] = sum;
}

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%s%s%s", &a, &b, &c);
        La = strlen(a); REPD(i,La,0) a[i+1] = a[i]; a[0] = '0';
        Lb = strlen(b); REPD(i,Lb,0) b[i+1] = b[i]; b[0] = '0';
        Lc = strlen(c); REPD(i,Lc,0) c[i+1] = c[i]; c[0] = '0';

        FOR(i, 0, La) FOR(j, 0, Lb) FOR(k, 0, Lc) f[k][i][j] = v[k][i][j] = 0;
        cout << get_res(La, Lb, Lc) << '\n';
    }
}
    
