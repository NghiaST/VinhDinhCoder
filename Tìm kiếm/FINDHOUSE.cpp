#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define N 200005
using namespace std;
int n, a[N], vmin, vmax;
long long f[N], vl[N], vr[N];

void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

void Enter() {
    int x;
    ReadInt(n);
    FOR(i, 1, n) ReadInt(a[i]), vmin = min(vmin, a[i]), vmax = max(a[i], vmax);
    FOR(i, 1, n) ReadInt(x), f[a[i]] += x;
}

void Process() {
    long long sum = 0, res = 1e18;
    FORD(i, vmax, vmin) vr[i] = vr[i+1] + sum, sum += f[i];
    sum = 0;
    FOR(i, vmin, vmax) vl[i] = vl[i-1] + sum, sum += f[i];
    FOR(i, vmin, vmax) res = min(res, vl[i] + vr[i]);
    cout << res;
}

int main() {
    Enter();
    Process();
}
    
