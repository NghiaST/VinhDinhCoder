#include <iostream>
#include <algorithm>
#define maxi(a,b,c) max(a,max(b,c))
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
const int N = 1005;
int n, m, res, a[N][N], f1[N][N], f2[N][N], f3[N][N], f4[N][N];

void Init() {
    FOR(i, 1, n) FOR(j, 1, m) f1[i][j] = max(f1[i-1][j], f1[i][j-1]) + a[i][j];
    FOR(i, 1, n) FORD(j, m, 1) f2[i][j] = max(f2[i-1][j], f2[i][j+1]) + a[i][j];
    FORD(i, n, 1) FOR(j, 1, m) f3[i][j] = max(f3[i+1][j], f3[i][j-1]) + a[i][j];
    FORD(i, n, 1) FORD(j, m, 1) f4[i][j] = max(f4[i+1][j], f4[i][j+1]) + a[i][j];
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin >> n >> m;
    FOR(i, 1, n) FOR(j, 1, m) cin >> a[i][j];
    Init();
    REP(i, 2, n) REP(j, 2, m) {
        int p1 = f1[i-1][j] + f4[i+1][j] + f2[i][j+1] + f3[i][j-1];
        int p2 = f1[i][j-1] + f4[i][j+1] + f2[i-1][j] + f3[i+1][j];
        res = maxi(res, p1, p2);
    }
    cout << res;
}
    
