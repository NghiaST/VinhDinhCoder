#include <iostream>
#include <algorithm>
#include <cmath>
#define llong long long
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 1000005
using namespace std;
llong n, r, f[N];

void eratos() {
    int NN = n;
    FOR(i,2,NN) if (!f[i]) {
        f[i] = ++r;
        FOR(j,i,NN/i) f[i*j] = true;
    }
}

void Process() {
    int p = f[n], x, y;
    int t = sqrt(p - 1);
    int q = p - t*t - 1;
    if (t & 1) {
        x = t/2 + 1, y = -t/2;
        y += min(q, t);
        q -= min(q, t);
        x -= min(q, t);
    } else {
        x = -t/2, y = t/2;
        y -= min(q, t);
        q -= min(q, t);
        x += min(q, t);
    }
    cout << x << ' ' << y;
}

int main()
{
    scanf("%d", &n);
    eratos();
    Process();
}
    
