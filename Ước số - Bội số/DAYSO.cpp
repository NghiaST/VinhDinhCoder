#include <bits/stdc++.h>
#define REP(i, l, r) for(int i=l; i<r; i++)
using namespace std;
long long n, x, y;
int main() {
    scanf("%I64d%I64d", &n, &x);
    REP(i, 1, n) {
        scanf("%I64d", &y);
        x = __gcd(x, y);
    }
    cout << x*n;
}
    
