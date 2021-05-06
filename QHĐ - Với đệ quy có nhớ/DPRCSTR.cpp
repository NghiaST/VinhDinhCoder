#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define REP(i, l, r) for(int i=l; i<r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
using namespace std;
int n, k, t, h[505], f[505][505];

int main()
{
    scanf("%d%d%d", &n, &k, &t);
    FOR(i, 1, n) scanf("%d", &h[i]);
    FOR(i, 1, n) {
        int l = max(1, i-t+1);
        int vmax = h[i];
        FORD(w, min(i, k), 1) f[i][w] = f[i-1][w];
        FORD(j, i, l) {
            if (vmax > h[j]) vmax = h[j];
            FORD(w, min(j, k), 1) f[i][w] = max(f[i][w], f[j-1][w-1] + vmax*(i-j+1));
        }
    }
    cout << f[n][k];
}
    
