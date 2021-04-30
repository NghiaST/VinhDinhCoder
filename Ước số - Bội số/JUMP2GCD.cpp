#include <iostream>
#include <algorithm>
using namespace std;
long long n, k, x1, x2, x, y, res;

int main() {
    scanf("%I64d%I64d%I64d%I64d", &n, &k, &x1, &x2);
    x = __gcd(x1, x2);
    while (n--) {
        scanf("%I64d", &y);
        if ((y-k) % x == 0) res++;
    }
    cout << res;
}
    
