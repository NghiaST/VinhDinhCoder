#include <bits/stdc++.h>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
#define FORD(i, r, l) for(int i=r; i>=l; i--)
#define REP(i, l, r) for(int i=l; i<=r; i++)
#define N 2000005
using namespace std;
long long n, x1, x2, y1, y2, x, y;
int main() {
    while (scanf("%I64d%I64d%I64d%I64d", &x1, &y1, &x2, &y2) != -1) {
        n = __gcd(x1, y1); x1 /= n; y1 /= n;
        n = __gcd(x2, y2); x2 /= n; y2 /= n;
        x = x1*y2 + x2*y1;
        n = __gcd(x, y1); x /= n; y1 /= n;
        n = __gcd(x, y2); x /= n; y2 /= n;
        cout << x << '/' << y1*y2 << '\n';
    }
}
    
