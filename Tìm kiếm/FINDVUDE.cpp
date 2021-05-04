#include <iostream>
#include <algorithm>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define N 100005
using namespace std;
int n, m, a[N], b[N];
long long fa[N], fb[N];

void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c)) c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
}

void Enter() {
    ReadInt(n);
    ReadInt(m);
    FOR(i, 1, n) ReadInt(a[i]);
    FOR(i, 1, m) ReadInt(b[i]);
    sort(a+1, a+n+1);
    sort(b+1, b+m+1);
    FOR(i, 1, n) fa[i] = fa[i-1] + a[i];
    FORD(i, m, 1) fb[i] = fb[i+1] + b[i];
}

void Process() {
    int posa = 1, posb = 1, _next = 2;
    long long res = 1e18, sum = 0, val;
    while (posa <= n || posb <= m) {
        if (posa > n) _next = 1;
        else if (posb > m) _next = 0;
        else _next = (a[posa] > b[posb]);
        if (!_next) val = a[posa]; else val = b[posb];
        sum = val*(posa-1) - fa[posa-1] + fb[posb] - val*(m - posb + 1);
        res = min(res, sum);
        if (!_next) posa++; else posb++;
    }
    cout << res;
}

int main() {
    Enter();
    Process();
}
    
