#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
const int N = 505;
int n, m, a[N][N], b[N][N], row[N], column[N], f[N][N][2], Ans[N][N];

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    while (cin >> n >> m, n!=0) {
        FOR(i, 1, n) FOR(j, 1, m) cin >> a[i][j];
        FOR(i, 1, n) FOR(j, 1, m) cin >> b[i][j];
        FOR(i, 1, n) row[i] = 0;
        FOR(i, 1, m) column[i] = 0;
        FOR(i, 1, n) {
            int val = 0;
            FOR(j, 1, m) {
                row[i] += a[i][j];
                column[j] += b[i][j];
                f[i][j][0] = row[i] + Ans[i-1][j];
                f[i][j][1] = column[j] + Ans[i][j-1];
                Ans[i][j] = max(f[i][j][0], f[i][j][1]);
            }
        }
        cout << Ans[n][m] << '\n';
    }
}
    
