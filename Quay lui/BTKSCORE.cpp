#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;

int n, k, sum, a[25][25], f[25][1001];

void Print(int x, int val) {
    if (!x) { cout << "YES\n"; return; }
    Print(x-1, val - a[f[x][val]][x]);
    cout << a[f[x][val]][x] << ' ';
}

int main()
{
    cin >> sum >> k >> n;
    FOR(i, 1, n) FOR(j, 1, k) cin >> a[i][j];
    f[0][0] = -1;
    FOR(i, 1, k) {
        FOR(w, 0, sum) if (f[i-1][w]) {
            FOR(j, 1, n) if (a[f[i-1][w]][i-1] <= a[j][i] && w + a[j][i] <= sum) f[i][w + a[j][i]] = j;
        }
    }
    if (!f[k][sum]) { cout << "NO"; return 0; }
    Print(k, sum);
}
    
