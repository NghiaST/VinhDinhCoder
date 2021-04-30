#include <iostream>
#include <algorithm>
using namespace std;
long long n, a, b, c, l, r, m;
int main() {
    scanf("%I64d%I64d%I64d", &a, &b, &n);
    c = a/__gcd(a,b)*b;
    l = 1, r = 1e18;
    while (l < r) {
        m = (l+r)/2;
        if (m/a + m/b - m/c < n) l = m+1; else r = m;
    }
    if (l/a + l/b - l/c == n) cout << l; else cout << -1;
}
    
