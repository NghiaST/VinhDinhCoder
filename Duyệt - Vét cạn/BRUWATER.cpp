#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 100005
using namespace std;
int n, m, a[N];
long long f[N];

void ReadInt(int &x) {
    char c = getchar();
    while (!isdigit(c) && c != '-') c = getchar();
    int deg = 1;
    if (c == '-') deg = -1, c = getchar();
    x = 0;
    while (isdigit(c)) x = (x << 3) + (x << 1) + c - '0', c = getchar();
    x *= deg;
}

void update(int x, int val) { for(; x; x -= x&-x) f[x] += val; }
long long getBIT(int x) { long long val = 0; for(; x<=n; x += x&-x) val += f[x]; return val; }

int main() {
    int l, r, v;
    ReadInt(n);
    ReadInt(m);
    while (m--) {
        ReadInt(l);
        ReadInt(r);
        ReadInt(v);
        update(r, v);
        update(l-1, -v);
    }
    FOR(i, 1, n) cout << getBIT(i) << ' ';
}
    
