#include <bits/stdc++.h>
using namespace std;
long long n, L, R, x, y;
int main() {
    scanf("%I64d%I64d%I64d%I64d", &n, &L, &R, &x);
    while (--n) {
        scanf("%I64d", &y);
        x = x/__gcd(x,y)*y;
        if (x > R) break;
    }
    cout << R/x - (L-1)/x;
}
    
