#include <iostream>
#define FOR(i, l, r) for(int i=l; i<=r; i++)
using namespace std;
long long n, f[55];

int main() {
    scanf("%d", &n);
    f[0] = 3;
    FOR(i, 1, 50) f[i] = f[i-1]*2 + i + 3;
    int p = 50;
    while (p && f[p-1] > n) p--;
    while (p) {
        if (n < f[p-1]) p--;
        else if (n > f[p-1] + p + 3) n -= f[p-1] + p + 3;
        else {
            if (n == f[p-1] + 1) putchar('m'); else putchar('o');
            return 0;
        }
    }
    if (n == 1) putchar('m'); else putchar('o');
}
    
