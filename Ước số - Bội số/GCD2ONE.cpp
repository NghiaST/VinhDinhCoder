#include <bits/stdc++.h>
using namespace std;
long long n, x, y;
int main() {
    scanf("%I64d%I64d", &n, &x);
    while (--n) {
        scanf("%I64d", &y);
        x = __gcd(x, y);
    }
    cout << (x == 1 ? 0 : -1);
}
    
