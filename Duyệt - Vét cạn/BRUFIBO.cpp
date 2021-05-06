#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define N 76
using namespace std;

long long r, f[N];

void Init() {
    f[++r] = 0;
    f[++r] = 1;
    while (f[r] <= 1e15) f[r+1] = f[r] + f[r-1], r++;
}

bool check(long long x) {
    int l = r;
    FOR(i, 1, r) {
        while (l && f[i] * f[l] > x) l--;
        if (f[i] * f[l] == x) return true;
    }
    return false;
}

int main() {
    Init();
    long long t, x;
    scanf("%lld", &t);
    while (t--) {
        scanf("%lld", &x);
        cout << (check(x) ? "YES\n" : "NO\n");
    }
}
    
