#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
long long n, a, b, res = 1;

int main() {
    scanf("%I64d%I64d%I64d", &a, &b, &n);
    int i = 2;
    while (i*i <= max(a, b)) {
        long long x1 = 0, x2 = 0;
        while (a%i == 0) a/=i, x1++;
        while (b%i == 0) b/=i, x2++;
        if (x1 && x2) res *= pow(i, min(x1 * n, x2));
        i++;
    }
    if (a == b && a != 1) res *= a;
    cout << res;
}
    
