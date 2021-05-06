#include <iostream>
#define N 10005
using namespace std;
int n, x, f0, f5;

int main() {
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &x);
        if (x) f5++; else f0++;
    }
    if (!f5 || f5 < 9 && f0) { cout << 0; return 0; }
    if (!f0) { cout << -1; return 0; }
    while (f5 > 8) {
        cout << 555555555;
        f5 -= 9;
    }
    while (f0--) cout << 0;
}
    
